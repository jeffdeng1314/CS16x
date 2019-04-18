#include "header.h"
#include "creature.h"
#include "human.h"
#include "world.h"

/*********************************************************************
 * ** Function:human
 * ** Description:constructor
 * ** Parameters:n/a
 * ** Pre-Conditions:create human object
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
human::human(){

	type = 0;
	strength = 11;
	hitpoints = 100;
	payoff = 200;
	cost = 150;	
	
//	num_human = 0;
}



/*
void human::set_num_human(){

	num_human = world::get_num(); 

}

int human::get_num_human(){


	return num_human;
}
*/
