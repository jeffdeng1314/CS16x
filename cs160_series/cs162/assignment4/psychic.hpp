#pragma once
#include "header.hpp"
#include "pokemon.hpp"

/*********************************************************************
 * ** Function: psychic
 * ** Description: psychic class
 * ** Parameters: n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
class psychic:public pokemon{

protected:
	string p0;
	string p1;
	string p2;
	int chance;
	//string f2_2;

public:
	psychic();
	~psychic();
	string get_name_0();
	string get_name_1();
	string get_name_2();
	void set_name_0();
	void set_name_1();
	void set_name_2();
	
	bool capture_chance();
	void encounter();


};