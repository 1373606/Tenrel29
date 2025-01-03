

#include <iostream>
#include "Baddie.h"
using namespace std;

int main()
{
    Baddie goblin("Goblin");
    Baddie troll("Troll");

    cout << troll.name << " has " << troll.lives << " lives " << endl;
    goblin.attack(troll);
    cout << troll.name << " has " << troll.lives << " lives " << endl;

    Location *library;

    library = new Location("The library", "a golden axe");
    string option = "";

    while (option != "5") {
        cout << "Choose what to do. \n1. Check the room.\n2. bring it out for me.\n4. Search Goblin \n3. Pick up what you can find \n5. Quit" << endl;
		cin >> option;

		if (option == "1")
			library->displayTreasure();

		if (option == "2")
            goblin.displayTreasure();

        if (option == "4")
            library->displayMoney();

		if (option == "3") {
			goblin.takeTreasure(library);
			goblin.displayTreasure();
			library->displayTreasure();
           
		}
    }
   


    //goblin.displayTreasure();
}

