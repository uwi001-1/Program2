#include "potion.h"

Potion::Potion()        // Default constructor
{
	szName = "";         // Name of the potion (Healing, Mana)
	szType = "";         // Type of potion (Health, Mana, Buff)
	iPotency = 0;         // Strength or effect level of the potion
	dQuantity = 0.0;     // Quantity in liters or ounces
}
 
Potion::Potion(string szN, string szT, int iP, double dQ)   // Parameterized constructor
{
	szName = szN;
	szType = szT;
	iPotency = iP;
	dQuantity = dQ;
}

// Setters and Getters
void Potion::setName(string szName)
{
	this-> szName = szName;
}
string Potion::getName()
{
	return szName;
}

void Potion::setType(string szType)
{
	this-> szType = szType;
}
string Potion::getType()
{
	return szType;
}

void Potion::setPotency(int iPotency)
{
	this-> iPotency = iPotency;
}
int Potion::getPotency()
{
	return iPotency;
}

void Potion::setQuantity(double dQuantity)
{
	this-> dQuantity = dQuantity;
}
double Potion::getQuantity()
{
	return dQuantity;
}

// Display function
void Potion::display()
{
	cout << getName() << " [" << getType() << "] - Potency: " << getPotency() << ", Quantity: " << getQuantity() << "L" << endl;
}
