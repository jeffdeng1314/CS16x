#pragma once
#include "header.hpp"
#include "pokemon.hpp"
#include "flying.hpp"
#include "rock.hpp"
#include "psychic.hpp"

/*********************************************************************
 * ** Function: trainer
 * ** Description: trainer class
 * ** Parameters: n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
class trainer{

protected:
	int bag_pokeballs;
	pokemon *flying_array;
	pokemon *rock_array;
	pokemon *psychic_array;

public:
	trainer();
	~trainer();
	void set_pokeballs(int);
	int get_pokeballs();
	void throw_pokeballs();	
	/*
	void set_flying(int);
	void set_rock(int);
	void set_psychic(int);
*/
	char trainer_indicator();



};

