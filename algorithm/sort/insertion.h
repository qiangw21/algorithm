/*=========================================================================
	类名称：	InsertionSort
	类功能：	插入排序；时间复杂度o(n^2)

	创建者：	qiang.wang
	创建日期：	2022.08.20
=========================================================================*/

#ifndef _INSERTION_SORT_H_
#define _INSERTION_SORT_H_

#include "sort.h"

template <typename T>
class InsertionSort final : public Sort<T>
{
public:
	InsertionSort() {}
	~InsertionSort() {}

	std::string name() override { return "InsertionSort"; }
	void sort(std::vector<T>& data) override;
};

//=========================================================================
template <typename T>
void InsertionSort<T>::sort(std::vector<T>& data)
{
	for (int i = 1; i < data.size(); ++i) {
		for (int j = i; j > 0 && this->less(data[j], data[j - 1]); --j) {
			this->exch(data, j, j - 1);
		}
	}
}

#endif // !_INSERTION_SORT_H_

