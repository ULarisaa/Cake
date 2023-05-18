#pragma once
#include<string.h>
#include<iostream>
#include "Cake.h"
#include"RecipeCake.h"
using namespace std;
class CakeMaker
{
public:
	CakeMaker() {};
	void takeCommand(RecipeCake*C);
};

