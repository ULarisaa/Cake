#include "CommandTaker.h"
#include<iostream>
using namespace std;
CarouselOfCakes* carousel = new CarouselOfCakes();
void CommandTaker::takeCommand(RecipeCake *recipe){
	string name = recipe->getName();
	if (carousel->getCake(name) ==1)
		{
			cout << "Your order: "<<name << endl;
			return;
		}
	CakeMaker* cakeMaker = new CakeMaker();
	cout<<"Your cake will be ready soon!"<<endl;
	return cakeMaker->takeCommand(recipe);
	
};
void CommandTaker::takeCommand(RecipeCake *recipe, int nrOfCakes)
{
	CakeMaker* cakeMaker = new CakeMaker();
	string name = recipe->getName();
	for (int i = 1; i <= nrOfCakes; i++)
	{
		if (carousel->getCake(name) == 1)
		{
			cout << "Your order: " << name << endl;
		}
		else {
			cout << "Your piece of " << recipe->getName() << " will be done soon! " << endl;
			cakeMaker->takeCommand(recipe);
		}
		
	}
};
void CommandTaker::getCakesFromCarousel()
{
		carousel->outStorage();
		cout << "---------------------------------------" << endl<<endl;
};
bool CommandTaker::checkCarouselOfCakes() 
{ 
	if (carousel->getCurrentCapacity() <= 3)
		return true;
	else return false;
};
void CommandTaker::refillCarousel()
{ 
	Cake* C;
	ifstream f;
	string name;
	int time;
	f.open("menu.txt");
	if (checkCarouselOfCakes()==true)
	{
		while (!f.eof() && carousel->getCurrentCapacity()< 10)
		{
			f >> name;
			f >> time;
			C = new Cake(name);
			carousel->addCake(C);
		}
	}
	f.close();

};