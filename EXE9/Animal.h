/* MenyBuganim_302490610    BaruchRothkoff 311603252 */
#include<iostream>
using namespace std;

#ifndef Animal_H
#define Animal_H

class Animal {
private:
	static int counter;
protected:
	const int id;
	char*name;
	char*nick;
	float age;
	char const* class_animal;
	float FoodPerDay;
public:
	Animal(char*name, char*nick, float age, char*class_animal, float FoodPerDay);
	Animal(const Animal&copy);
	~Animal();

	const int getId() { return id; }
	char*getName();
	char*getNick();
	float getAge();
	const char*getClass();
	float getFoodPerDay();

	void setName(char*name);
	void setNick(char*nick);
	void setAge(float age);
	void setFoodPerDay(float FoodPerDay);

	virtual void eat() = 0;
	virtual void sleep() = 0;
	virtual void print()const;			//virtual function -> we have to notice which one we print, this why Virtual.
};

#endif // !Animal_H