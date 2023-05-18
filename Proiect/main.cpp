//Usvat Larisa 6.2 an 2
#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include"CommandPanel.h"

using namespace std;

int main()
{
	string order_name, ans, ans2;
	int order_quantity;
	CommandPanel *order=new CommandPanel();
	do {
		cout << "Hello!" << endl;
		cout << "Do you want to order? [Y/N]" << endl;
		cout << "Answer: ";
		cin >> ans;
		if (ans == "N")
		{
			exit(0);
		}
		else if (ans == "Y")
		{
			cout << "Here's our menu: " << endl;
			order->showProducts();
			do {
				cout << endl;
				cout << "Here's the list of the cakes that are available in the store: " << endl;
				order->showProductsInCarousel();
				cout << "Please introduce the name of the cake" << endl << "Answer: ";
				cin >> order_name;
				cout << "Please enter the quantity" << endl << "Answer: ";
				cin >> order_quantity;
				order->selectProduct(order_name, order_quantity);
				cout <<endl<< "Do you want anything else? [Y/N]" << endl;
				cout << "Answer: ";
				cin >> ans2;
			} while (ans2 == "Y");
			cout << endl;
		}
		else
			cout << "Optiune gresita!"<<endl;
		cout << endl;
	} while (ans != "N");
	return 0;
}