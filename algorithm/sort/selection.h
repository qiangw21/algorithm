/*=========================================================================
	�����ƣ�	SelectionSort
	�๦�ܣ�	ѡ������ʱ�临�Ӷ�o(n^2)

	�����ߣ�	qiang.wang
	�������ڣ�	2022.08.20
=========================================================================*/

#ifndef _SELECTION_SORT_H_
#define _SELECTION_SORT_H_

#include "sort.h"

template <typename T>
class SelectionSort final : public Sort<T>
{
public:
	SelectionSort() {}
	~SelectionSort() {}

	std::string name() override { return "SelectionSort"; }
	void sort(std::vector<T>& data) override;
};

//=========================================================================
template <typename T>
void SelectionSort<T>::sort(std::vector<T>& data)
{   //��������
	for (int i = 0; i < data.size(); ++i) {
		//��data[i] �� data[i+1..N]����СԪ�ؽ��� ���Ӷ� N^2 / 2
		int min_id = i;
		for (int j = i + 1; j < data.size(); ++j) {
			if (this->less(data[j], data[min_id]))
				min_id = j;
		}
		this->exch(data, i, min_id);
	}
}

#endif // !_SELECTION_SORT_H_

