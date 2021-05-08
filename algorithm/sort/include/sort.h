#ifndef _SORT_H_
#define _SORT_H_

//虚基类、模板类
template<typename T> 
class Sort
{
public:
	Sort() {};
	virtual ~Sort() {};

	virtual void sort(T* data, int length) = 0;
	void show(T* data, int length);
	bool isSorted(T* data, int length);

protected:
	bool less(T v, T w);
	void exch(T* data, int i, int j);
};
 

#endif // !_SORT_H_
