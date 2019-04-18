#include "header.h"
#include "creature.h"


/*********************************************************************
 * ** Function:creature
 * ** Description:constructor
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
creature::creature(){
	type = 0;
	strength = 10;
	hitpoints = 10;

}


/*********************************************************************
 * ** Function:creature
 * ** Description:non-default constructor
 * ** Parameters:newType,newStrength,newHit
 * ** Pre-Conditions:create the object
 * ** Post-Conditions:set the values
 * ** Return:n/a
*********************************************************************/
creature::creature (int newType, int newStrength, int newHit){

	type = newType;
	strength = newStrength;
	hitpoints = newHit;
}




/*
string creature::getSpecies(){

	switch (type){
		case 0:
			return "Human";
		case 1:
			return "Cyberdemon";
		case 2:
			return "Balrog";
		case 3:
			return "Elf";


	}
	return "Unknown";
}
*/





/*********************************************************************
 * ** Function:getDamage()
 * ** Description:damage the creatures
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:damage
*********************************************************************/
int creature::getDamage(){

	int damage;

	damage = (rand()% strength) + 1;
	cout << " "  <<" attacks for " << damage << " points! " <<endl;

	if ((type = 2) || (type == 1)){
		if ((rand()%100) < 5){
		damage = damage + 50;
			cout <<" Magical attack inflicts 50 additional damage points!"<<endl;
		}
	}

	if(type == 3){

		if((rand()%10) == 0){
			cout <<" Magical attack inflicts" << damage <<" additional damage points!"<<endl;
			damage = damage * 2;
		}
	}

	if ( type == 2){
		int damage2 = ( rand() % strength) + 1;
		cout << " Balrog speed attack inflicts " << damage2 <<" additional damage points!"<<endl;
		damage  = damage + damage2;


	}
	return damage;
}


/*
void creature::set_values(int type, int strength, int hp, double payoff, double cost){

	this->type = type;
	this->strength = strength;
	hitpoints = hp;
	this->payoff = payoff;
	this->cost = cost;
}
*/

/*********************************************************************
 * ** Function:set_name
 * ** Description:setting the name
 * ** Parameters:name
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
void creature::set_name(string name){

	this->name = name;

}


/*********************************************************************
 * ** Function:get_cost
 * ** Description:accessor
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return: cost
*********************************************************************/
double creature::get_cost(){

	return cost;

}


/*********************************************************************
 * ** Function:get_payoff
 * ** Description:accessor
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:payoff
*********************************************************************/
double creature::get_payoff(){

	return payoff;

}



/*********************************************************************
 * ** Function:set_hp
 * ** Description:set healthpoints
 * ** Parameters:int x
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
void creature::set_hp(int x){

	hitpoints =  x;

}


/*********************************************************************
 * ** Function:get_hp
 * ** Description:accessor
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:hitpoints
*********************************************************************/
int creature::get_hp(){

	return hitpoints;

} 



/*********************************************************************
 * ** Function:get_name
 * ** Description:accessor
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:name
*********************************************************************/
string creature::get_name(){

	return name;

}


/*********************************************************************
 * ** Function:get_strength
 * ** Description:accessor
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:strength
*********************************************************************/
int creature::get_strength(){

	return strength;
}
