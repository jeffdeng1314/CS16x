#include "header.hpp"
#include "event.hpp"


/*********************************************************************
 * ** Function: pokestop
 * ** Description: pokestop class
 * ** Parameters: n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
class pokestop:public event{

protected:
	int pokeballs;
public:
	pokestop();
	//void set_value();
	int get_pokeballs();
	void encounter();
	char indicator();
};