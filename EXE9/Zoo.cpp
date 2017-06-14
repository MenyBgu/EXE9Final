/* MenyBuganim_302490610    BaruchRothkoff 311603252 */
#include<iostream>
#include<vector>
#include <cassert>
#include"Animal.h"
#include "Zoo.h"
using namespace std;

Zoo::Zoo(char*zooName) :name(zooName) {
}

Zoo::~Zoo() {}

Animal *Zoo::getAnimal(int id) {			//return animal at specific id.
	if (listAnimals.empty()) {
		return 0;
	}
	return listAnimals.at(id);
}

void Zoo::addAnimal(Animal*animal) {	//push elements to the vector of animals.
	listAnimals.push_back(animal);
}

bool Zoo::removeAnimal(int id) {		//remove animal at specific id.
	if (listAnimals.at(id)) {
		listAnimals.erase(listAnimals.begin() + id);
		cout << "checkDel " << id << endl;
		return true;
	}
	return false;
}

void Zoo::feedAllAnimals()const {				//feed all animals.
	for (int i = 0; i < listAnimals.size(); i++) {
		listAnimals[i]->eat();
	}
}

void Zoo::sleepAnimals()const {				//try to make all animals at the zoo go to sleep.
	for (int i = 0; i < listAnimals.size(); i++) {
		listAnimals[i]->sleep();
	}
}

void Zoo::printZoo()const {				//print zoo animals details.

	cout << "Zoo name: " << name << endl;
	cout << "The zoo contains " << listAnimals.size() << " animals." << endl;
	cout << "The animals are: " << endl;
	for (int i = 0; i < listAnimals.size(); i++) {	//print our animals.
		listAnimals[i]->print();
	}
}