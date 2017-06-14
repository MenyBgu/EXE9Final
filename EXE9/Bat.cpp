/* MenyBuganim_302490610    BaruchRothkoff 311603252 */
#include<iostream>
#include<cassert>
#include"Animal.h"
#include "Bat.h"
using namespace std;

Bat::Bat(char*name, char*nick, float age, char*class_animal, float FoodPerDay, char*food) :		//Parameters Constructor.
Animal(name, nick, age, class_animal, FoodPerDay) {
	this->food = new char[25];
	assert(food&&"heap error.");
	strcpy_s(this->food, strlen(food) + 1, food);
}

Bat::Bat(const Bat&copy) : Animal(copy) {
	this->food = new char[25];
	assert(food&&"heap error.");
	strcpy_s(this->food, strlen(copy.food), copy.food);
}

Bat::~Bat() {			//release dynamic memory.
	delete[]food;
}

void Bat::eat() {
	cout << "Bat < " << id << " > eats every day < " << FoodPerDay << " > Kg of " << food << "." << endl;
}

void Bat::sleep() {
	cout << "Bat < " << id << " > sleeps only at day. " << endl;
}

void Bat::print() const{
	cout << "***********" << endl;
	cout << "Bat details are: " << endl;
	this->Animal::print();
	cout << "Food: " << food << endl;
	cout << "***********" << endl << endl;
}