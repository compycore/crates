// minimal class to replace std::vector
template<typename T, uint8_t Capacity>
struct List
{
	uint8_t count = 0; // stores the number of actually stored objects
	T data[Capacity]; // stores the actual data

	// adds a new value and allocates more space if needed (and allowed)
	void add(T const &item)
	{
		if (count < Capacity)
		{
			data[count++] = item;
		}
	}

	// wipe the array
	void clear()
	{
		// technically this should loop through and manually destroy each item
		count = 0;
	}

	// count getter
	uint8_t size() const
	{
		return count;
	};

	// TODO see if there's a standard name for this
	uint8_t capacity() const
	{
		return Capacity;
	};

	// delete an index
	void erase(uint8_t index)
	{
		for (uint8_t i = index; i < count; i++)
		{
			data[i] = data[i + 1]; // copy next element left
		}

		count--;
	}

	// getter
	T &operator[](uint8_t index)
	{
		return data[index];
	}
};
