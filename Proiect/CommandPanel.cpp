#include "CommandPanel.h"
#include<fstream>
#include<iostream>
using namespace std;
void CommandPanel::showProducts()
{
	cout << "---------------------------------" << endl << "Menu:" << endl;
	ifstream f;
	string cake_name;
	int cake_time;
	f.open("menu.txt");
	while (!f.eof())
	{
		f >> cake_name;
		f >> cake_time;
		cout << "Product: " << cake_name << "      Time " << cake_time<<endl;
	}
	f.close();
	cout << "---------------------------------"<<endl;
};

void CommandPanel::selectProduct(string name, int numberOfProducts)
{
	int found = 0;
	ifstream f;
	string cake_name;
	int cake_time;
	CommandTaker* commandTaker = new CommandTaker();
	while(found==0)
	{
		f.open("menu.txt");
		while (!f.eof())
		{
			f >> cake_name;
			f >> cake_time;
			if (cake_name == name)
			{
				RecipeCake* c = new RecipeCake(cake_name, cake_time);
				commandTaker->takeCommand(c, numberOfProducts);
				found++;
			}
		}
		if (found == 0)
		{
			cout << "Wrong order! Please choose an item from the menu!!"<<endl;
			cin >> name;
		}
		f.close();
	} 
	
};
void CommandPanel::showProductsInCarousel()
{
	CommandTaker* commandTaker = new CommandTaker();
	commandTaker->refillCarousel();
	commandTaker->getCakesFromCarousel();
};