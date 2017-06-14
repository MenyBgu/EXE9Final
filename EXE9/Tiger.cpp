/* MenyBuganim_302490610    BaruchRothkoff 311603252 */
#include<iostream>
#include"Animal.h"
#include"Tiger.h"
using namespace std;

Tiger::Tiger(char*name, char*nick, float age, char*class_animal, float FoodPerDay, float maxSpeed) :		//Parameters Constructor.
Animal(name, nick, age, class_animal, FoodPerDay), maxSpeed(maxSpeed) {}

Tiger::Tiger(const Tiger&copy) : Animal(copy), maxSpeed(copy.maxSpeed) {}

Tiger::~Tiger() {}

void Tiger::eat() {
	cout << "Tiger < " << id << " > eats every day < " << FoodPerDay << " > K g meat." << endl;
}

void Tiger::sleep() {
	cout << "Tiger < " << id << " > sleeps only at night. " << endl;
}

void Tiger::print() const{
	cout << "***********" << endl;
	cout << "Tiger details are: " << endl;
	this->Animal::print();
	cout << "Max speed: " << maxSpeed << "Km/h" << endl;
	cout << "***********" << endl << endl;
}