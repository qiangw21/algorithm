#include "random_array.h"

//std includes
#include <ctime>
#include <random>

void get_random_array(size_t length, std::vector<int>& array)
{
	std::default_random_engine e;
	std::uniform_int_distribution<int> u(static_cast<int>(-1 * length), static_cast<int>(length));
	e.seed(time(0));

	array.clear();
	for (int i = 0; i < length; ++i)
	{
		array.push_back(u(e));
	}
}

void get_random_array(size_t length, std::vector<float>& array)
{
	std::default_random_engine e;
	std::uniform_real_distribution<float> u(static_cast<float>(-1.0 * length), static_cast<float>(length));
	e.seed(time(0));

	array.clear();
	for (int i = 0; i < length; ++i)
	{
		array.push_back(u(e));
	}
}