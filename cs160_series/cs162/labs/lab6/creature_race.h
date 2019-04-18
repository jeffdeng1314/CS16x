#pragma once
#include "header.h"
//#include "race.h"
/*********************************************************************
 * ** Function:creature
 * ** Description:creature class
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
class creature{

	protected:
		int strength; //how much damamge we can inflict
		int hitpoints; //how much damage we can sustain
		string species;

	public:
		creature();
		void set_hp(int);
		int get_hp();
		string getSpecies(void);
		void set_strength(int); 
		int getDamage();//returns amount of damage this creature inflicts in one round 
};

