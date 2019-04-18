#include "header.hpp"
#include "pokestop.hpp"

/*********************************************************************
 * ** Function: pokestop()
 * ** Description: the constructor function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
pokestop::pokestop(){
	pokeballs = (rand()%8 + 3);
}

/*********************************************************************
 * ** Function: get_pokeballs
 * ** Description: the accessor function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:pokeballs
*********************************************************************/
int pokestop::get_pokeballs(){
	return pokeballs;
}

/*********************************************************************
 * ** Function: encounter
 * ** Description: the encoutner function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:cout message
 * ** Return:n/a
*********************************************************************/
void pokestop::encounter(){

	cout <<"Fill up on poke-balls"<<endl;

}

/*********************************************************************
 * ** Function: indicator
 * ** Description: the indicator function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:'O'
*********************************************************************/
char pokestop::indicator(){
	return 'O';
}