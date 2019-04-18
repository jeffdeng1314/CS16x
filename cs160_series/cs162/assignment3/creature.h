#pragma once
#include "header.h"

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
		int type; //0 human, 1 cyberdemo, 2 balrog, 3 elf
		int strength; //how much damamge we can inflict
		int hitpoints; //how much damage we can sustain
		string name;
		double payoff;//how much you win for a creature
		double cost;// how much it cost to purchase the creature
		//string getSpecies();


	public:
		creature();
		creature (int newType, int newStrength, int newHit);
		void set_hp(int);
		int get_hp();
		void set_name(string);
		string get_name();
		int get_strength(); 
		double get_cost();
		double get_payoff();
		int getDamage();//returns amount of damage this creature inflicts in one round 
};

