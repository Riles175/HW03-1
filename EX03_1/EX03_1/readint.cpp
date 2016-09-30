#include <iostream>
#include "readint.h"
#include <stdexcept>
using namespace std;

int read_int(const string &prompt, int low, int high)
{
	try {
		if (low < 1 && high > 5)
			throw out_of_range("Low must be greater than one or High must be less that 5.");
		if (low > high) {
			throw invalid_argument("Low can't be greater than High");
			throw range_error("");
		}
	}
		catch (range_error& ex2)
		{
			cout << "Get out!";
			exit(0);
		}
	
}
bool set_element_of_x(int index, int val)
{
	int x[10];
	if (index >= 0 && index < 10)
	{
		x[index] = val;
		return true;
	}
	if (index > 0 && index > 10) {
		throw std::out_of_range("index must be greater than zero or less then 10");
		return false;
	}
}