#pragma once
#include "header.hpp"
#include "pokemon.hpp"


/*********************************************************************
 * ** Function: flying
 * ** Description: flying class
 * ** Parameters: n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
class flying:public pokemon{

protected:
	string f0;
	string f1;
	string f2;
	int chance;
	//string f2_2;

public:
	flying();
	~flying();
	string get_name_0();
	string get_name_1();
	string get_name_2();
	void set_name_0();
	void set_name_1();
	void set_name_2();
	bool capture_chance();
	void encounter();

};
//                                          