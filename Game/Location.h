#pragma once

#include "string"
#include <iostream>
using namespace std;

class Location
{
public:
	string name;
	string treasure;
	Location(string theName, string theTreasure);
	void displayTreasure();
	void displayMoney();
};


Location::Location(string theName, string theTreasure)
{
	name = theName;
	treasure = theTreasure;
}


void Location::displayMoney()
{

}

void Location::displayTreasure()
{
	if (treasure != "") {
		cout << name << " contains " << treasure << endl;
	}
	else {
		cout << name << " does not have any treasure" << endl;
	}
}

