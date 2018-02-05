// minimal class to replace std::vector
template<typename T, unsigned int MaxCapacity>
class Vector
{
	unsigned int d_size; // stores the number of actually stored objects
	unsigned int d_capacity; // stores allocated capacity
	unsigned int d_max_capacity; // prevent the vector from eating up all the memory
	T *d_data; // stores the actual data

public:
	// default constructor
	Vector() : d_size(0), d_capacity(0), d_max_capacity(MaxCapacity), d_data(0) {};

	// copy constuctor
	Vector(Vector const &other) : d_size(other.d_size), d_capacity(other.d_capacity), d_max_capacity(other.d_max_capacity), d_data(0)
	{
		d_data = (T *)malloc(d_capacity * sizeof(T));
		memcpy(d_data, other.d_data, d_size * sizeof(T));
	};

	// destructor
	~Vector()
	{
		free(d_data);
	};

	// needed for memory management
	Vector &operator=(Vector const &other)
	{
		free(d_data);
		d_size = other.d_size;
		d_capacity = other.d_capacity;
		d_max_capacity = other.d_max_capacity;
		d_data = (T *)malloc(d_capacity * sizeof(T));
		memcpy(d_data, other.d_data, d_size * sizeof(T));
		return *this;
	};

	// adds a new value and allocates more space if needed (and allowed)
	void push_back(T const &x)
	{
		if (d_capacity < d_max_capacity && d_capacity == d_size) resize();
		if (d_size < d_capacity) d_data[d_size++] = x;
	};

	// wipe the array
	void clear()
	{
		d_size = 0;
	}

	// size getter
	unsigned int size() const
	{
		return d_size;
	};

	// delete an index
	void erase(int index)
	{
		for (int i = index; i < d_size; ++i)
		{
			d_data[i] = d_data[i + 1]; // copy next element left
		}

		d_size--;
	}

	// const getter
	T const &operator[](unsigned int idx) const
	{
		return d_data[idx];
	};

	// changeable getter
	T &operator[](unsigned int idx)
	{
		return d_data[idx];
	};

private:
	// allocates double the old space while respecting d_max_capacity
	void resize()
	{
		d_capacity = d_capacity ? d_capacity * 2 : 1;

		if (d_capacity > d_max_capacity)
		{
			d_capacity = d_max_capacity;
		}

		T *newdata = (T *)malloc(d_capacity * sizeof(T));
		memcpy(newdata, d_data, d_size * sizeof(T));
		free(d_data);
		d_data = newdata;
	};
};
