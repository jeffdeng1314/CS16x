#include "header.h"
#include "creature_race.h"
//#include "race.h"


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
 * ** Function:get_strength
 * ** Description:accessor
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:strength
*********************************************************************/
void creature::set_strength(int s){

	 strength = s;
}



string getSpecies(){

	return species;

}
