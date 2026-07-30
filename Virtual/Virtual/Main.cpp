#include<iostream>
class Entity
{
public:
	virtual std::string GetName()
	{
		return "Entity";
	}
};

class Player : public Entity
{
private:
	std::string p_Name;
public:
	Player(const char* name)
		:p_Name(name)
	{}

	std::string GetName() override
	{
		return p_Name;
	}
};

void PrintName(Entity* entity)//传入的是Entity类的参数，就去Entity类里面寻找需要的方法(GetName)
{
	std::cout << entity->GetName() << std::endl;
}

int main()
{
	Entity* e = new Entity();
	PrintName(e);//Entity

	Player* p = new Player("qinjinyan");
	PrintName(p);//qinjinyan

	return 0;
}