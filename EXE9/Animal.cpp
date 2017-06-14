/* MenyBuganim_302490610    BaruchRothkoff 311603252 */
#include<iostream>
#include"Animal.h"
#include <cassert>
using namespace std;

Animal::Animal(char*name, char*nick, float age, char*class_animal, float FoodPerDay) :		//Parameters Constructor.
class_animal(class_animal), id(++counter)
{
	this->name = new char[25];
	assert(name&&"Heap error.");
	strcpy_s(this->name, strlen(name) + 1, name);

	this->nick = new char[25];
	assert(nick&&"Heap error.");
	strcpy_s(this->nick, strlen(nick) + 1, nick);

	this->age = age;
	this->FoodPerDay = FoodPerDay;
}

Animal::Animal(const Animal&copy) :															//Copy Constructor.
class_animal(copy.class_animal), id(++counter)
{
	this->name = new char[25];
	assert(name&&"Heap error.");
	strcpy_s(this->name, strlen(copy.name) + 1, copy.name);

	this->nick = new char[25];
	assert(nick&&"Heap error.");
	strcpy_s(this->nick, strlen(copy.nick) + 1, copy.nick);

	this->age = copy.age;
	this->FoodPerDay = copy.FoodPerDay;
}

Animal::~Animal() {
	delete[] name;
	delete[] nick;
}

void Animal::setAge(float age) {
	this->age = age;
}

void Animal::setFoodPerDay(float FoodPerDay) {
	this->FoodPerDay = FoodPerDay;
}

void Animal::setName(char*name) {
	delete[]name;
	name = new char[25];
	assert(name&&"Heap error.");
	strcpy_s(this->name, strlen(name) + 1, name);
}

void Animal::setNick(char*nick) {
	delete[]nick;
	nick = new char[25];
	assert(nick&&"Heap error.");
	strcpy_s(this->nick, strlen(nick) + 1, nick);
}

char*Animal::getName() {
	return name;
}

char*Animal::getNick() {
	return nick;
}

float Animal::getAge() {
	return age;
}

float Animal::getFoodPerDay() {
	return FoodPerDay;
}

const char*Animal::getClass() {
	return class_animal;
}

void Animal::print()const {
	cout << endl;
	cout << "Name: " << name << endl;
	cout << "NickName: " << nick << endl;
	cout << "Age: " << age << endl;
	cout << "Class: " << class_animal << endl;
	cout << "id: " << id << endl;
}