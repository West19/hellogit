#include "Door.h"

using namespace std;

void Door::setColour(string color)
{
	colour = color;
}
string Door::getColour()
{
	return colour;
}

void Door::setWidth(int wid)
{
	width = wid;
}

int Door::getWidth()
{
	return width;
}

Door::Door()
{ 
	colour = "";
	width = 0;
}











