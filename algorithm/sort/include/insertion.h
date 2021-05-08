#ifndef _INSERTION_SORT_H_
#define _INSERTION_SORT_H_

#include <sort.h>

template <typename T>
class InsertionSort final : public Sort<T>
{
public:
	InsertionSort() {};
	~InsertionSort() {};

	void sort(T* data, int length) override;
};


#endif // !_INSERTION_SORT_H_

