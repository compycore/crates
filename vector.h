// minimal class to replace std::vector
template<typename T, unsigned char Capacity>
struct Vector
{
	unsigned char d_size = 0; // stores the number of actually stored objects
	unsigned char d_capacity; // stores allocated capacity
	T *d_data; // stores the actual data

	// default constructor
	Vector()
	{
		d_capacity = Capacity;
		d_data = (T *)malloc(d_capacity * sizeof(T));
	}

	// destructor
	~Vector()
	{
		free(d_data);
	}

	// adds a new value and allocates more space if needed (and allowed)
	void push_back(T const &x)
	{
		if (d_size < d_capacity)
		{
			d_data[d_size++] = x;
		}
	}

	// wipe the array
	void clear()
	{
		d_size = 0;
	}

	// size getter
	unsigned char size() const
	{
		return d_size;
	};

	// TODO see if there's a standard name for this
	unsigned char capacity() const
	{
		return d_capacity;
	};

	// delete an index
	void erase(unsigned char index)
	{
		for (unsigned char i = index; i < d_size; i++)
		{
			d_data[i] = d_data[i + 1]; // copy next element left
		}

		d_size--;
	}

	// getter
	T &operator[](unsigned char index)
	{
		return d_data[index];
	}
};
