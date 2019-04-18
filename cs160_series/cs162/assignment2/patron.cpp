#pragma once

#include "header.h"
#include "cart.h"
#include "librarian.h"
#include "library.h"
#include "structs.h"
#include "patron.h"
//////////////////////The cart, patron, and librarian constructors are from the pair programming///////////////////
/*********************************************************************
 * ** Function: patron
 * ** Description: the constructor
 * ** Parameters: n/a
 * ** Pre-Conditions: called when the object is first created
 * ** Post-Conditions: set default values
 * ** Return:n/a
 * *********************************************************************/ 
patron::patron(){
	name = "Your name please";
	id = 0;
	books_checked_out = 0;

}


