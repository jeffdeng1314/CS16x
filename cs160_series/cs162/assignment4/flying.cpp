#include "header.hpp"
#include "flying.hpp"
/*********************************************************************
 * ** Function: flying()
 * ** Description: the constructor function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
flying::flying(){

	chance = (rand()%100 + 1);
	f0 = "Airplane";
	f1 = "Space Shuttle";
	f2 = "UFO";
	//cout <<"flying constructor"<<endl;
}

/*********************************************************************
 * ** Function: get_name_0()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:f0
*********************************************************************/
string flying::get_name_0(){
	return f0;
}

/*********************************************************************
 * ** Function: get_name_1()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:f1
*********************************************************************/
string flying::get_name_1(){
	return f1;
}

/*********************************************************************
 * ** Function: get_name_2()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:f2
*********************************************************************/
string flying::get_name_2(){
	return f2;
}


/*********************************************************************
 * ** Function: set_name_0()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
void flying::set_name_0(){
	f0 = "Airplane";
}

/*********************************************************************
 * ** Function: set_name_1()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
void flying::set_name_1(){
	f1 = "Space Shuttle";
}

/*********************************************************************
 * ** Function: set_name_2()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
void flying::set_name_2(){
	f2 = "UFO";
}

/*********************************************************************
 * ** Function: capture_chance
 * ** Description: the capturing chance function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:true or false
*********************************************************************/
bool flying::capture_chance(){
	if (chance <= 50)
		return true;
	else
		return false;
}

/*********************************************************************
 * ** Function: encounter
 * ** Description: encounter
 * ** Parameters: n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:cout a message
 * ** Return:n/a
*********************************************************************/
void flying::encounter(){
	cout <<"Capture the flying type " << f0 <<" nearby."<<endl;
}

/*********************************************************************
 * ** Function: flying()
 * ** Description: the destructor function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:clear default value
 * ** Return:n/a
*********************************************************************/
flying::~flying(){}
//                                                                                                        