#include <iostream>
#include <ctime>
#include <string>

using namespace std;

#include "armour.h"

// Creates a armour and returns it
Armour* CreateArmour()
{
	// constants to randomize the armour name
	const string adjective[4] = {"Bronze ", "Copper ", "Silver ", "Gold "};
	const string type[4] = {"helmet ", "breastplate ", "bracers ", "greaves "};
	const string subtitle[4] = {"of fire", "of water", "of wind", "of earth"};

	// Creates a pointer to the armour struct
	Armour* new_armour = new Armour;

	// Allocates the value for the name of the armour
	new_armour->name.append(adjective[rand() % 4]);
	new_armour->name.append(type[rand() % 4]);
	new_armour->name.append(subtitle[rand() % 4]);
	new_armour->armour_class = rand() % 10;

	return new_armour;
}

// Prints the information about a armour to screen
void ShowArmourInfo( Armour* a ) 
{
	cout << "---------------------------------------" << endl;
	cout << "Armour name: " << a->name << endl;
	cout << "Armour class: " << a->armour_class << endl;
	cout << "---------------------------------------" << endl;
}

// Deallocates the memory that armour have been using
void DestroyArmour( Armour *a )
{
	delete a;
}
