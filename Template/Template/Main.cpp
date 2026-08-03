//#include<iostream>
//
//template<typename T>
//
//void Print(T var)
//{
//	std::cout << var << std::endl;
//}
//int main()
//{
//	Print(5);
//	Print("qin");
//	Print(5.5f);
//
//	std::cin.get();
//}


//非类型模板
#include<iostream>
template<typename T,int N>

class Array
{
private:
	T m_Array[N];
public:
	int GetArraySize()const { return N; };
};
int main()
{
	Array<int,5> arr;
	std::cout << arr.GetArraySize() << std::endl;
	std::cin.get();
}