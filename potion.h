#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*********************************************************************
Class Name: Potion
Purpose:
    The Potion class represents a single potion in a wizard's 
    inventory.
Notes:
    Each potion has a name, type, potency, and quantity.
*********************************************************************/
class Potion
{
	private:
		string szName;        // Name of the potion (Healing, Mana)
		string szType;        // Type of potion (Health, Mana, Buff)
		int iPotency;         // Strength or effect level of the potion
		double dQuantity;     // Quantity in liters or ounces

	public:
		Potion();
		Potion(string szName, string szType, int iPotency, double dQuantity);

		// Setters and Getters
		void setName(string szName);
		string getName();

		void setType(string szType);
		string getType();

		void setPotency(int iPotency);
		int getPotency();

		void setQuantity(double dQuantity);
		double getQuantity();

		// Display function
		void display();
};