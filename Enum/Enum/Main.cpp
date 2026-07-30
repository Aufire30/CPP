#include<iostream>

enum Example
{
	A = 5, B = 6, C = 7
};

int main()
{
	Example value = A;
	if (value == A)
	{
		std::cout << value << std::endl;
	}
	return 0;
}