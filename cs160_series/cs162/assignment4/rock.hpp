#pragma once
#include "header.hpp"
#include "pokemon.hpp"

/*********************************************************************
 * ** Function: rock
 * ** Description: rock class
 * ** Parameters: n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
class rock:public pokemon{

protected:
	int chance;
	string r0;
	string r1;
	string r2;
	//string f2_2;

public:
	rock();
	~rock();
	string get_name_0();
	string get_name_1();
	string get_name_2();
	void set_name_0();
	void set_name_1();
	void set_name_2();
	bool capture_chance();
	void encounter();


};