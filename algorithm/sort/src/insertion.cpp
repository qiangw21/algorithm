#include <insertion.h>

template <typename T>
void InsertionSort<T>::sort(T* data, int length)
{
	for (int i = 1; i < length; ++i) {
		for (int j = i; j > 0 && this->less(data[j], data[j - 1]); --j) {
			this->exch(data, j, j - 1);
		}
	}
}

template class InsertionSort <int>;
template class InsertionSort <float>;
template class InsertionSort <double>;