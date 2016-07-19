#ifndef _ARMOUR_H_
#define _ARMOUR_H_

// Declaration of what type of information that should be saved in a armour object
struct Armour
{
	string name;
	int armour_class;
	int test;
};

// Returning a pointer to a finished armour object
Armour* CreateArmour();

// Printing the information that CreateArmour have pointed out
void ShowArmourInfo( Armour* a );

// Deallocate all memory that Armour have used to create a armour
void DestroyArmour( Armour* a );

#endif
