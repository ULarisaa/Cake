#include "CarouselOfCakes.h"
#include<iostream>
using namespace std;
int CarouselOfCakes::counter = 0;
string CarouselOfCakes::storage[12] = {"","","","","","","","","","","",""};
bool CarouselOfCakes::addCake(Cake* cake) {
	counter++;
	storage[counter] = cake->getName();
	return true;
};
int CarouselOfCakes::getCake(string name) {
	for (int i = 1; i <= counter; i++)
	{
		if (storage[i] == name)
		{
			for (int j = i; j < counter; j++)
				storage[j] = storage[j + 1];
			counter--;
			return 1;
		}
	}
	return 0;

}
int CarouselOfCakes::getCurrentCapacity() {
	return counter;
};
void CarouselOfCakes::outStorage() {
	for (int i = 1; i <= counter; i++)
		cout << storage[i]<< endl;
}