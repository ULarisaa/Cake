#include "Cake.h"
#include<string.h>
#include<iostream>
using namespace std;
Cake::Cake(string name) { this->name = name; };
string Cake::getName() { return this->name; };