/*=========================================================================
	�����ƣ�	Sort
	�๦�ܣ�	Ϊ�����㷨�ṩģ����ࣻ������ʾ���Ƚϡ��������Ƿ����

	�����ߣ�	qiang.wang
	�������ڣ�	2022.08.20
=========================================================================*/

#ifndef _SORT_H_
#define _SORT_H_

#include <iostream>
#include <vector>
#include <string>

template<typename T> 
class Sort
{
public:
	Sort() {};
	virtual ~Sort() {}

	virtual std::string name() = 0;
	virtual void sort(std::vector<T>& data) = 0;
	void show(const std::vector<T>& data);
	bool isSorted(const std::vector<T>& data);

protected:
	bool less(T v, T w);
	void exch(std::vector<T>& data, int i, int j);
};
 

//=========================================================================
template <typename T>
bool Sort<T>::less(T v, T w)
{
	return v < w ? true : false;
}

template <typename T>
void Sort<T>::exch(std::vector<T>& data, int i, int j)
{
	T t = data[i];
	data[i] = data[j];
	data[j] = t;
}

template <typename T>
void Sort<T>::show(const std::vector<T>& data)
{
	for (int i = 0; i < data.size(); ++i) {
		std::cout << data[i] << " ";
	}
	std::cout << std::endl;
}

template <typename T>
bool Sort<T>::isSorted(const std::vector<T>& data)
{
	for (int i = 1; i < data.size(); ++i) {
		if (less(data[i], data[i - 1]))
			return false;
	}

	return true;
}

#endif // !_SORT_H_
