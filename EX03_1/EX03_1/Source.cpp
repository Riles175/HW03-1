#include <iostream>
#include <stdexcept>
#include <limits>
#include "readint.h"
using namespace std;


int main()
{
	int x;
	do {
		try {
			cout << "Enter a number: ";
			cin >> x;
			set_element_of_x(x, 5);
		}
		catch (out_of_range& ex)
		{
			cout << ex.what() << " Try agian" << endl;
		}

	} while (x > 10);
	
	int low, high;
	cout << "Enter the range of values to read.\n";
	cout << "high: ";
	cin >> high;
	cout << "low: ";
	cin >> low;

		try
		{
			int number = read_int("Please enter a number within the range: ", low, high);
			cout << "You entered " << number << endl;
		}
		catch (invalid_argument &exx) {
			cerr << "Exception: You supplied an invalid argument for read_int!\n";
			exit(0);
		}
		catch (out_of_range& e) {
			cout << e.what() << "Try agian" << endl;
		}
	return 0;
}