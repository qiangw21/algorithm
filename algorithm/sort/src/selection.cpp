#include <selection.h>

template <typename T>
void SelectionSort<T>::sort(T* data, int length)
{   //升序排序
	for (int i = 0; i < length; ++i) {
		//将data[i] 和 data[i+1..N]中最小元素交换 复杂度 N^2 / 2
		int min_id = i;
		for (int j = i + 1; j < length; ++j) {
			if (less(data[j], data[min_id]))
				min_id = j;
		}
		exch(data, i, min_id);
	}
}

template class SelectionSort <int>;
template class SelectionSort <float>;
template class SelectionSort <double>;