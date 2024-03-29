#include "header.hpp"
#include "rock.hpp"

/*********************************************************************
 * ** Function: rock()
 * ** Description: the constructor function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
rock::rock(){
	chance = (rand()%100 + 1);
	r0 = "Rocky";
	r1 = "Stone Cold";
	r2 = "Dwayne Johnson";
	//cout <<"rock constructor"<<endl;
}

/*********************************************************************
 * ** Function: set_name_1()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
string rock::get_name_0(){
	return r0;
}

/*********************************************************************
 * ** Function: set_name_1()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
string rock::get_name_1(){
	return r1;
}

/*********************************************************************
 * ** Function: set_name_1()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
string rock::get_name_2(){
	return r2;
}

/*********************************************************************
 * ** Function: set_name_1()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
void rock::set_name_0(){
	r0 = "Rocky";
}

/*********************************************************************
 * ** Function: set_name_1()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
void rock::set_name_1(){
	r1 = "Stone Cold";
}

/*********************************************************************
 * ** Function: set_name_1()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
void rock::set_name_2(){
	r2 = "Dwayne Johnson";
}

/*********************************************************************
 * ** Function: set_name_1()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
bool rock::capture_chance(){
	if(chance <= 75)
		return true;
	else
		return false;
}

/*********************************************************************
 * ** Function: set_name_1()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
void rock::encounter(){
	cout <<"Capture the rock type " << r0 <<" nearby."<<endl;
}

/*********************************************************************
 * ** Function: rock()
 * ** Description: the destructor function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:clear default value
 * ** Return:n/a
*********************************************************************/
rock::~rock(){}
//  