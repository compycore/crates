// Minimal class to replace std::vector
template<typename Data>
class Vector
{
	unsigned int d_size; // Stores no. of actually stored objects
	unsigned int d_capacity; // Stores allocated capacity
	Data *d_data; // Stores data

public:
	Vector() : d_size(0), d_capacity(0), d_data(0) {}; // Default constructor

	Vector(Vector const &other) : d_size(other.d_size), d_capacity(other.d_capacity), d_data(0)
	{
		d_data = (Data *)malloc(d_capacity * sizeof(Data));
		memcpy(d_data, other.d_data, d_size * sizeof(Data));
	}; // Copy constuctor

	~Vector()
	{
		free(d_data);
	}; // Destructor

	Vector &operator=(Vector const &other)
	{
		free(d_data);
		d_size = other.d_size;
		d_capacity = other.d_capacity;
		d_data = (Data *)malloc(d_capacity * sizeof(Data));
		memcpy(d_data, other.d_data, d_size * sizeof(Data));
		return *this;
	}; // Needed for memory management

	void push_back(Data const &x)
	{
		if (d_capacity == d_size) resize();
		d_data[d_size++] = x;
	}; // Adds new value and allocates more space if needed

	void clear()
	{
		d_size = 0;
	}

	unsigned int size() const
	{
		return d_size;
	}; // Size getter

	void erase(int index)
	{
		for (int i = index; i < d_size; ++i)
		{
			d_data[i] = d_data[i + 1]; // Copy next element left
		}

		d_size--;
	}

	Data const &operator[](unsigned int idx) const
	{
		return d_data[idx];
	}; // Const getter

	Data &operator[](unsigned int idx)
	{
		return d_data[idx];
	}; // Changeable getter

private:
	void resize()
	{
		d_capacity = d_capacity ? d_capacity * 2 : 1;
		Data *newdata = (Data *)malloc(d_capacity * sizeof(Data));
		memcpy(newdata, d_data, d_size * sizeof(Data));
		free(d_data);
		d_data = newdata;
	}; // Allocates double the old space
};
