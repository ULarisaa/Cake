#include "RecipeCake.h"
#include<iostream>
#include<string.h>
using namespace std;
RecipeCake::RecipeCake(string name, int time)
{
	this->name = name;
	this->time = time;
}
string RecipeCake::getName() { return this->name; }
int RecipeCake:: getTime() { return this->time; }