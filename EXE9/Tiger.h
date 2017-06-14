/* MenyBuganim_302490610    BaruchRothkoff 311603252 */
#include<iostream>
#include"Animal.h"
using namespace std;

#ifndef Tiger_H
#define Tiger_H

class Tiger :public Animal {
	const float maxSpeed;
public:
	Tiger(char*name, char*nick, float age, char*class_animal, float FoodPerDay, float maxSpeed);
	Tiger(const Tiger&copy);
	~Tiger();

	const float getMaxSpeed() { return maxSpeed; }

	void eat();
	void sleep();
	void print()const;
};
#endif // !Tiger_H