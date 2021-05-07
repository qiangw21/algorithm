#ifndef _SELECTION_SORT_H_
#define _SELECTION_SORT_H_

#include <sort.h>

template <typename T>
class SelectionSort final : public Sort<T>
{
public:
	SelectionSort() {};
	~SelectionSort() {};

	void sort(T* data, int length) override;
};



#endif // !_SELECTION_SORT_H_

