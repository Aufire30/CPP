#include<iostream>


struct Entity
{
	int x, y;//非静态成员

	static void print()
	{
		std::cout << "Hello World!" << std::endl;
	}
};

int main()
{
	Entity::print();

	return 0;
}