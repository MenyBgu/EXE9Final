/* MenyBuganim_302490610    BaruchRothkoff 311603252 */
#include<iostream>
#include"Animal.h"
using namespace std;

#ifndef Giraffe_H
#define Giraffe_H

class Giraffe :public Animal {
private:
	float height;
public:
	Giraffe(char*name, char*nick, float age, char*class_animal, float FoodPerDay, float height);
	Giraffe(const Giraffe&copy);
	~Giraffe();

	float getHeight() { return height; }
	void eat();
	void sleep();
	void print()const;
};
#endif // !Giraffe_H