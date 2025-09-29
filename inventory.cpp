#include "inventory.h"

Inventory::Inventory()   //default constructor
{
	szName = "";
}

Inventory::Inventory(string szN);   //parameterized constructor
{
	szName = szN;
}

//getter and setter
void Inventory::setName(string szName)
{
	this-> szName = szName;
}

string Inventory::getName()
{
	return szName;
}

int Inventory::getInventorySize()
{
	return 
}

void Inventory::addPotion(const Potion& newPotion)
{
	
}

Inventory::

Inventory::

Inventory::