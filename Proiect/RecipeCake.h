#pragma once
#include<string.h>
#include<iostream>
using namespace std;
class RecipeCake
{
private:
	string name;
	int time;
public:
	RecipeCake(string name, int time);
	string getName() ;
	int getTime();
};

