#pragma once
#include<string.h>
#include<iostream>
#include<fstream>
#include"RecipeCake.h"
#include"CakeMaker.h"
#include"CarouselOfCakes.h"
using namespace std;
class CommandTaker
{
private:
	RecipeCake *carouselRecipe;
	CakeMaker *cakeMaker;
	CarouselOfCakes *carousel;
public:
	CommandTaker() {};
	void takeCommand(RecipeCake *recipe);
	void takeCommand(RecipeCake *recipe, int nrOfCakes);
	void getCakesFromCarousel();
	bool checkCarouselOfCakes();
	void refillCarousel();
};

