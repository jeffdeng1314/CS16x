#pragma once

#include "header.hpp"
#include "location.hpp"
//class location;

/*********************************************************************
 * ** Function: event
 * ** Description: event class
 * ** Parameters: n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
class event:public location{

protected:
public:
	virtual void encounter() = 0;
	virtual char indicator() = 0;

};	