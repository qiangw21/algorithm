#include <selection.h>

template <typename T>
void SelectionSort<T>::sort(T* data, int length)
{   //��������
	for (int i = 0; i < length; ++i) {
		//��data[i] �� data[i+1..N]����СԪ�ؽ��� ���Ӷ� N^2 / 2
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