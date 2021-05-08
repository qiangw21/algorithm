#include <selection.h>
#include <insertion.h>
#include <assert.h>


int main()
{
	int a[10] = { 5, 6, 2, 8, 3, 4, 55, 9, 4, 5 };

	/*SelectionSort<int> SelSort;
	SelSort.show(a, 10);
	SelSort.sort(a, 10);
	SelSort.show(a, 10);
	assert(SelSort.isSorted(a, 10));*/

	InsertionSort<int> InsSort;
	InsSort.show(a, 10);
	InsSort.sort(a, 10);
	InsSort.show(a, 10);
	assert(InsSort.isSorted(a, 10));

	return 0;
}