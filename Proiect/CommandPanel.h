#pragma once
#include<string.h>
#include<iostream>
#include<list>
#include<iterator>
#include"CommandTaker.h"
#include"RecipeCake.h"
using namespace std;
class CommandPanel
{
private:
	list<RecipeCake*> menu;
	CommandTaker *commandTaker;
public:
	CommandPanel(){};
	void showProducts();
	void selectProduct(string name, int numberOfProducts);
	void showProductsInCarousel();
};

