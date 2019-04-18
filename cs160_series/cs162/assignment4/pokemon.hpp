#pragma once
#include "header.hpp"
#include "event.hpp"
//class event;


/*********************************************************************
 * ** Function: pokemon
 * ** Description: pokemon class
 * ** Parameters: n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
class pokemon:public event{

protected:

public:
virtual string get_name_0() = 0;
virtual string get_name_1() = 0;
virtual string get_name_2() = 0;
virtual bool capture_chance() = 0;
virtual void encounter() = 0;
virtual ~pokemon(){

}
virtual char indicator(){

	return 'P';

};


};//                                                    