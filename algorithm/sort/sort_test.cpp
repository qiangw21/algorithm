#include "random_array.h"
#include "selection.h"
#include "insertion.h"

//std includes
#include <assert.h>

//两种排序时间对比
template<typename T>
void compare_sort(const std::vector<T>& data, Sort<T>& sort1, Sort<T>& sort2)
{
	std::vector<T> data_1(data);
	std::vector<T> data_2(data);

	clock_t start = clock();
	sort1.sort(data_1);
	clock_t mid = clock();
	sort2.sort(data_2);
	clock_t end = clock();

	assert(sort1.isSorted(data_1));
	assert(sort2.isSorted(data_2));

	double sort1_time = (double)(mid - start) / CLOCKS_PER_SEC;
	double sort2_time = (double)(end - mid) / CLOCKS_PER_SEC;

	std::cout << sort1.name() << " is " << sort1_time / sort2_time << " times faster than " << sort2.name() << "." << std::endl;
}

int main()
{
	std::vector<int> data;
	get_random_array(100000, data);
	
	SelectionSort<int> selSort;
	InsertionSort<int> insSort;
	compare_sort<int>(data, selSort, insSort);

	return 0;
}