#include <iostream>
#include <cstdlib>
#include <string>

template <typename T>

class Array
{
public:
	Array()
	{
		this->array = NULL;
		this->size=0;
	}

	Array (Array &copy)
	{
		int n = copy._size();
		this->array = new T[n];
		for(int i=0; i<n; i++)
			this->array[i] = copy.array[i];
		this->size = copy.size;
	}
	Array(unsigned int n)
	{
		this->size = n;
		this->array = new T[n];
		for(unsigned int i=0; i < this->size; i++)
			array[i] = T();
	}

	~Array(){return;}

	T &operator[](int i)
	{
		if (i < 0 || static_cast<unsigned int>(i) >= this->size || !this->array)
			throw std::exception();
		return this->array[i];
	}

	T operator[](int i) const
	{
		if (i < 0 || static_cast<unsigned int>(i) >= this->size || !this->array)
			throw std::exception();
		return this->array[i];
	}

	Array &operator=(const Array &other)
	{
		// *this = other;
		unsigned int i = 0, len = other._size();
		if (this != &other)
		{
			this->size = len;
			if (len)
			{
				this->array = new T[len];
				while (i < len)
				{
					this->array[i] = other[i];
					++i;
				}
			}
			else
				this->array = NULL;
		}
		return *this;
	}

	unsigned int _size() const
	{
		return this->size;
	}


private:
	T *array;
	unsigned int size;
	
};