#include "CakeMaker.h"
#include "Cake.h"
#include <chrono>
#include <thread>
#include<string.h>
#include<iostream>
using namespace std::this_thread; 
using namespace std::chrono;
using namespace std;
void CakeMaker::takeCommand(RecipeCake*C)
{
	sleep_until(system_clock::now() + seconds(C->getTime()));
	cout << "Your cake is ready: "<<C->getName()<<endl;

}