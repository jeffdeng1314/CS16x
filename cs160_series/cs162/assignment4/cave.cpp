#include "header.hpp"
#include "cave.hpp"
//#include "event.hpp"
/*********************************************************************
 * ** Function: cave()
 * ** Description: the constructor function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
cave::cave(){
	mega_stones = 1;
}

/*********************************************************************
 * ** Function: get_mega_stones
 * ** Description: accessor
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:mega_stones
*********************************************************************/
int cave::get_mega_stones(){
	return mega_stones;
}

/*********************************************************************
 * ** Function: encounter
 * ** Description: encounter
 * ** Parameters: n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:cout a message
 * ** Return:n/a
*********************************************************************/
void cave::encounter(){
	cout <<"You see a precious stone nearby"<<endl;
}

/*********************************************************************
 * ** Function: indicator
 * ** Description: the indicator function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:'C'
*********************************************************************/
char cave::indicator(){
	return 'C';
}