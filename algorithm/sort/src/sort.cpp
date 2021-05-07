#include <sort.h>
#include <iostream>

template <typename T>
bool Sort<T>::less(T v, T w)
{
	return v < w ? true : false;
}

template <typename T>
void Sort<T>::exch(T* data, int i, int j)
{
	T t = data[i];
	data[i] = data[j];
	data[j] = t;
}

template <typename T>
void Sort<T>::show(T* data, int length)
{
	for (int i = 0; i < length; ++i) {
		std::cout << data[i] << " ";
	}
	std::cout << std::endl;
}

template <typename T>
bool Sort<T>::isSorted(T* data, int length)
{
	for (int i = 1; i < length; ++i) {
		if(less(data[i], data[i -1]))
			return false;
	}

	return true;
}

template class Sort <int>;
template class Sort <float>;
template class Sort <double>;