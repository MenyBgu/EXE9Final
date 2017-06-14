/* MenyBuganim_302490610    BaruchRothkoff 311603252 */
#include<iostream>
#include <cassert>
#include"Animal.h"
#include"Tiger.h"
#include "Giraffe.h"
#include "Zoo.h"
#include"Bat.h"
using namespace std;

int Animal::counter = 0;

int main() {
	{
		cout << "========================================================" << endl;		//our names.
		cout << "Meny Buganim  302490610 ---- Baruch Rothkoff  311603252" << endl;
		cout << "========================================================" << endl << endl;

		Zoo*zoo = new Zoo("Meny Magnificent ZoO");					//create new zoo.

		vector<Animal*>list = {										//create vector of animal. manual initializing.
			new Tiger("Tiger1", "Simba", 10.2, "Cats", 13.7, 120),
			new Tiger("Tiger2", "Rex", 3.1, "Cats", 5.3, 92),
			new Tiger("Tiger3", "Komba", 9.4, "Cats", 11.9, 111),
			new Giraffe("Giraffe1", "Gindi", 10, "Mammals", 12, 4.2),
			new Giraffe("Giraffe2", "Reuven", 7, "Mammals", 17, 5.2),
			new Giraffe("Giraffe3", "Rivlin", 5, "Mammals", 11.2, 3.2),
			new Bat("Bat1", "Kiril", 7.1, "Mammals", 2, "Garinim"),
			new Bat("Bat2", "Hoynen", 3.2, "Mammals", 3, "golem"),
			new Bat("Bat3", "Listen", 1.8, "Mammals", 4, "matboha")
		};

		for (int i = 0; i < list.size(); i++) {						//add animal to our zoo , from vector list.
			zoo->addAnimal(list[i]);
		}

		cout << "animals eat functions: " << endl;
		zoo->feedAllAnimals();
		cout << endl;
		cout << "animals sleep functions: " << endl;
		zoo->sleepAnimals();

		cout << endl;
		zoo->printZoo();

		for (int i = 0; i < list.size(); i++) {						//release all our dynamic memory.
			delete list[i];
		}
		delete zoo;

	}
	system("pause");
	return 0;
}