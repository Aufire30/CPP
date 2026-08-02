#include<iostream>
#include<memory>
class Entity
{
public:
	Entity()
	{
		std::cout << "Ctreated Entity!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}
};
int main()
{
	{
		std::unique_ptr<Entity> entity = std::make_unique<Entity>();
	}
	

	std::cin.get();
}