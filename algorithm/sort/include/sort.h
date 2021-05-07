#ifndef _SORT_H_
#define _SORT_H_

//����ࡢģ����
template<typename T> 
class Sort
{
public:
	Sort() {};
	virtual ~Sort() {};

	virtual void sort(T* data, int length) = 0;

	bool less(T v, T w);
	void exch(T* data, int i, int j);
	void show(T* data, int length);
	bool isSorted(T* data, int length);

};
 

#endif // !_SORT_H_
