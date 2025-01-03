#pragma once
#include <string>
#include "Location.h"

using namespace std;

class Baddie
{
public:
	string name; //should really be private with getter & setter
	int lives;   //should really be private with getter & setter
	string treasure;
	string money;
	Baddie(string theName);
	void attack(Baddie &theBaddie);
	void takeTreasure(Location *room);
	void displayTreasure();
	void displayMoney();
};

Baddie::Baddie(string theName)
{
	name = theName;
	lives = 10;
	treasure = "";
	money = "";
}

void Baddie::attack(Baddie &theBaddie)
{
	cout << name << " attacks " << theBaddie.name << endl;
	theBaddie.lives--; 

}

void Baddie::displayTreasure()
{
	if (treasure != "") {
		cout << name << " has " << treasure << endl;
	}
	else {
		cout << name << " does not have any treasure" << endl;
	}
}

void Baddie::displayMoney()
{
	
}

void Baddie::takeTreasure(Location *room)
{
	treasure = room->treasure;
	room->treasure = "";

}
