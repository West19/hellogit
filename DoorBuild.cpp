#include "Door.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector <Door>  House;

	Door door1;


	door1.setColour("white");
	door1.setWidth(3);
	House.push_back(door1);

	Door door2 = door1;

	door1.setColour("Grey");
	door1.setWidth(3);
	House.push_back(door1);

	door1.setColour("Transparent");
	door1.setWidth(15);
	House.push_back(door1);


	for (int i = 0; i<House.size(); i++)
	{
		cout <<"DOOR " << i+1 << "\n"
			<< "Colour " << House[i].getColour() << "\n"
			<< "Width(ft) " << House[i].getWidth() << endl;
	}

	
}


