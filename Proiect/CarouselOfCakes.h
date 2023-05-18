#pragma once
#include<string.h>
#include<iostream>
#include<list>
#include<iterator>
#include"Cake.h"
using namespace std;
class CarouselOfCakes
{
private:
	static string storage[12];
	static int counter;
	const unsigned int maxCapacity = 10;
	const unsigned int lowLimit = 3;
public:
	CarouselOfCakes(){};
	bool addCake(Cake *cake);
	int getCake(string name);
	int getCurrentCapacity();
	void outStorage();

};

