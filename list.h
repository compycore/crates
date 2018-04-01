// minimal class to replace std::vector
template<typename T, int Capacity>
struct List
{
	int d_size = 0; // stores the number of actually stored objects
	T *d_data; // stores the actual data

	// default constructor
	List()
	{
		d_data = (T *)malloc(Capacity * sizeof(T));
	}

	// destructor
	~List()
	{
		free(d_data);
	}

	// adds a new value and allocates more space if needed (and allowed)
	void add(T const &x)
	{
		if (d_size < Capacity) d_data[d_size++] = x;
	}

	// wipe the array
	void clear()
	{
		d_size = 0;
	}

	// size getter
	int size() const
	{
		return d_size;
	};

	int capacity() const
	{
		return Capacity;
	};

	// delete an index
	void erase(int index)
	{
		for (int i = index; i < d_size; i++)
		{
			d_data[i] = d_data[i + 1]; // copy next element left
		}

		d_size--;
	}

	// getter
	T &operator[](int idx)
	{
		return d_data[idx];
	}
};
