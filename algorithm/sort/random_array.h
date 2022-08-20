/*=========================================================================
	功能：	产生随机数组；int、float

	创建者：	qiang.wang
	创建日期：	2022.08.20
=========================================================================*/
#ifndef _RANDOM_ARRAY_H
#define _RANDOM_ARRAY_H

//std includes
#include <vector>

void get_random_array(size_t length, std::vector<int>& array);

void get_random_array(size_t length, std::vector<float>& array);

#endif // !_RANDOM_ARRAY_H

