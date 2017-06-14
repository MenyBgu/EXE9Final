/* MenyBuganim_302490610    BaruchRothkoff 311603252 */
#include<iostream>
#include"Animal.h"
#include "Giraffe.h"
using namespace std;

Giraffe::Giraffe(char*name, char*nick, float age, char*class_animal, float FoodPerDay, float height) :		//Parameters Constructor.
Animal(name, nick, age, class_animal, FoodPerDay), height(height) {}

Giraffe::Giraffe(const Giraffe&copy) : Animal(copy), height(copy.height) {}

Giraffe::~Giraffe() {}

void Giraffe::eat() {
	cout << "Giraffe < " << id << " > eats every day < " << FoodPerDay << " > K g leaves." << endl;
}

void Giraffe::sleep() {
	cout << "Giraffe < " << id << " > sleeps both day and night. " << endl;
}

void Giraffe::print()const {
	cout << "***********" << endl;
	cout << "Giraffe details are: " << endl;
	this->Animal::print();
	cout << "Height: " << height << " meters." << endl;
	cout << "***********" << endl << endl;
}