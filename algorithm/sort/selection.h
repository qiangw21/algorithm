/*=========================================================================
	类名称：	SelectionSort
	类功能：	选择排序；时间复杂度o(n^2)

	创建者：	qiang.wang
	创建日期：	2022.08.20
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
{   //升序排序
	for (int i = 0; i < data.size(); ++i) {
		//将data[i] 和 data[i+1..N]中最小元素交换 复杂度 N^2 / 2
		int min_id = i;
		for (int j = i + 1; j < data.size(); ++j) {
			if (this->less(data[j], data[min_id]))
				min_id = j;
		}
		this->exch(data, i, min_id);
	}
}

#endif // !_SELECTION_SORT_H_

