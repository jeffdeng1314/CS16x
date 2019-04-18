#include "header.hpp"
#include "trainer.hpp"

/*********************************************************************
 * ** Function: trainer()
 * ** Description: the constructor function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
trainer::trainer(){
	bag_pokeballs = 10;
	flying_array = NULL;
	rock_array = NULL;
	psychic_array = NULL;

}


/*********************************************************************
 * ** Function: flying()
 * ** Description: the destructor function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:clear default value
 * ** Return:n/a
*********************************************************************/
trainer::~trainer(){

	delete [] flying_array;
	delete [] rock_array;
	delete [] psychic_array;
	flying_array = NULL;
	rock_array = NULL;
	psychic_array = NULL;
}

/*********************************************************************
 * ** Function: set_pokeballs
 * ** Description: accessor
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:mega_stones
*********************************************************************/
void trainer::set_pokeballs(int x){//use for pokestop
	bag_pokeballs = bag_pokeballs + x;
}

/*********************************************************************
 * ** Function: get_pokeballs
 * ** Description: accessor
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:mega_stones
*********************************************************************/
void trainer::throw_pokeballs(){//throwing balls
	bag_pokeballs = bag_pokeballs - 1;
}


/*********************************************************************
 * ** Function: get_pokeballs
 * ** Description: accessor
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:mega_stones
*********************************************************************/
int trainer::get_pokeballs(){
	return bag_pokeballs;
}


/*********************************************************************
 * ** Function: indicator
 * ** Description: the indicator function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:'C'
*********************************************************************/
char trainer::trainer_indicator(){

	return 'T';

}
//                        