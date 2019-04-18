#include "header.hpp"
#include "psychic.hpp"

/*********************************************************************
 * ** Function: cave()
 * ** Description: the constructor function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
psychic::psychic(){
	chance = (rand()%100 + 1);
	p0 = "Psy";
	p1 = "Lil Yachty";
	p2 = "Migos";
	//cout <<"psychic constructor"<<endl;
}

/*********************************************************************
 * ** Function: get_name_0()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:f0
*********************************************************************/
string psychic::get_name_0(){
	return p0;
}


/*********************************************************************
 * ** Function: get_name_1()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:f1
*********************************************************************/
string psychic::get_name_1(){
	return p1;
}


/*********************************************************************
 * ** Function: get_name_1()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:f1
*********************************************************************/
string psychic::get_name_2(){
	return p2;
}


/*********************************************************************
 * ** Function: get_name_1()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:f1
*********************************************************************/
void psychic::set_name_0(){
	p0 = "Psy";
}

/*********************************************************************
 * ** Function: get_name_1()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:f1
*********************************************************************/
void psychic::set_name_1(){
	p1 = "Lil Yachty";
}

/*********************************************************************
 * ** Function: get_name_1()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:f1
*********************************************************************/
void psychic::set_name_2(){
	p2 = "Migos";
}


/*********************************************************************
 * ** Function: get_name_1()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:f1
*********************************************************************/
bool psychic::capture_chance(){
	if(chance <= 25)
		return true;
	else
		return false;
}

/*********************************************************************
 * ** Function: get_name_1()
 * ** Description: the naming function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:f1
*********************************************************************/
void psychic::encounter(){
	cout <<"Capture the psychic type " << p0 <<" nearby."<<endl;
}

/*********************************************************************
 * ** Function: psychic()
 * ** Description: the destructor function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:clear default value
 * ** Return:n/a
*********************************************************************/
psychic::~psychic(){}
//           