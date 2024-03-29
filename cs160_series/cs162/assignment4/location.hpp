#pragma once

#include "header.hpp"

class trainer;
class event;


/*********************************************************************
 * ** Function: location
 * ** Description: location class
 * ** Parameters: n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
class location{

protected:
int rows;
int columns;
char **board;
trainer *t1;
event *e1;

public:
	location();
	~location();
	void set_grid(char*, char*);
	void grid();
	void board_set();
	char **get_board();
	trainer* get_trainer();
	event* get_event();

	void set_trainer(trainer*);
	void set_event(event*);

};
/*          
                                
*/
//             