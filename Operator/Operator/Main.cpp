#include<iostream>

struct example
{
	int a, b;

	example(int a,int b)
		:a(a),b(b){}

	example Add(const example& other)
	{
		//return example(a + other.a, b + other.b);
		//return *this + other;
	}
	example operator+ (const example& other)
	{
		//return Add(other);
		return example(a + other.a, b + other.b);
		//this->a + other.a;
		//this->b + other.b;
		//return *this;
		
	}

	bool operator == (const example& other) const
	{
		return a == other.a && b == other.b;
	}
	bool operator != (const example& other) const
	{
		return !(*this == other);
		//return !operator ==(other);
	}

	void Print()const
	{
		std::cout << a << " " << b << std::endl;
	}

	int GetA()const
	{
		return a;
	}

	void SetA(int a) {
		this->a = a; // 明确区分形参 a 和成员变量 this->a
	}
};

std::ostream& operator<< (std::ostream& stream,const example& other)
{
	stream << other.a << " " << other.b;
	return stream;
}

int main()
{
	example a(1, 2);
	example b(3, 4);

	example c = a + b;
	c.Print();
	std::cout << c << std::endl;
	std::cin.get();
}