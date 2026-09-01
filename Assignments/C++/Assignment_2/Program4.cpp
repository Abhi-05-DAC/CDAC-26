//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Entity
//{
//private :
//	string name;
//	int health;
//	int level;
//	string type;
//
//public :
//	Entity& setName(const string& name)
//	{
//		this->name = name;
//		return *this;
//	}
//
//	Entity& setHealth(int health)
//	{
//		this->health = health;
//		return *this;
//	}
//
//	Entity& setLevel(int level)
//	{
//		this->level = level;
//		return *this;
//	}
//
//	Entity& setType(const string& type)
//	{
//		this->type = type;
//		return *this;
//	}
//
//	string getName() const
//	{
//		return name;
//	}
//
//	int getHealth() const
//	{
//		return health;
//	}
//
//	int getLevel() const
//	{
//		return level;
//	}
//
//	string getType() const
//	{
//		return type;
//	}
//
//	void displayInfo() const
//	{
//		cout << "\n==========Entity Information===========" << endl;
//
//		cout << "Name :" << name << endl;
//		cout << "Health : " << health << endl;
//		cout << "Level :" << level << endl;
//		cout << "Type :" << type << endl;
//	}
//
//};
//
//int main()
//{
//	Entity player;
//	Entity Enemy;
//	Entity Item;
//
//	player.setName("Virat Kohli").setHealth(100).setLevel(5).setType("Player");
//
//	Enemy.setName("Gautam Gambhir").setHealth(90).setLevel(6).setType("Enemy");
//
//	Item.setName("health Potion").setHealth(95).setLevel(12).setType("Item");
//
//	cout << "==========Game Entities : ==========" << endl;
//
//	player.displayInfo();
//	Enemy.displayInfo();
//	Item.displayInfo();
//
//	return 0;
//
//}
