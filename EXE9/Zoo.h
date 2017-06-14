/* MenyBuganim_302490610    BaruchRothkoff 311603252 */
#include<iostream>
#include"Animal.h"
#include<vector>
using namespace std;

#ifndef Zoo_H
#define Zoo_H

class Zoo {
private:
	const char*name;
	vector<Animal*> listAnimals;		//Vector it's dynamic list of objects. you can use std::list<T> too.
public:
	Zoo(char*zooName);
	~Zoo();

	const char*getName() { return name; }

	void addAnimal(Animal*animal);
	Animal*getAnimal(int id);
	bool removeAnimal(int id);
	void feedAllAnimals()const;
	void sleepAnimals()const;
	void printZoo()const;
};
#endif // !Zoo_H