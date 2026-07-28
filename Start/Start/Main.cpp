#include<iostream>

void Log(const char* message);

int main()
{
	const char* string = "Hello";
	std::cout << sizeof(string) << std::endl; //指针的大小取决于编译的目标架构，x64所有的指针都是8字节
	//想要获取字符串的长度用strlen
	for (int i = 0; i < sizeof(string); i++)
	{
		char c = string[i];
		std::cout << c << std::endl;
	}
	Log("HelloWorld!");
	std::cin.get();
}