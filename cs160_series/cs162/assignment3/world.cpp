#include "header.h"
#include "creature.h"
#include "world.h"
/*********************************************************************
 * ** Function:world()
 * ** Description:constructor
 * ** Parameters:n/a
 * ** Pre-Conditions:create an object first
 * ** Post-Conditions:set default values
 * ** Return:n/a
*********************************************************************/
world::world(){
	money = 10000;
	h = NULL;	
	e = NULL;
	bal = NULL;
	cyber = NULL;
	for (int i = 0; i < 5; i++)
		num[i] = 0;
}
/*
   world::world(double x){

   money = x;

   }
   */

//human** world::get_human(){


/*********************************************************************
 * ** Function:set_money
 * ** Description:set money value
 * ** Parameters:double x
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
void world::set_money(double x){

	money = x;

}


/*********************************************************************
 * ** Function:get_money
 * ** Description:accessor
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:return the value
 * ** Return:money
*********************************************************************/
double world::get_money(){

	return money;

}



/*********************************************************************
 * ** Function:get_human
 * ** Description:return the content
 * ** Parameters:n/a
 * ** Pre-Conditions:create object human
 * ** Post-Conditions:access to the pointer
 * ** Return:h
*********************************************************************/
human* world::get_human(){
	return h;
	//return &h;

}


/*********************************************************************
 * ** Function:set_num
 * ** Description:mutator for num
 * ** Parameters:int x, int type
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
void world::set_num(int x, int type){
	
	num[type] = x;
}



/*********************************************************************
 * ** Function:get_num
 * ** Description:accessory
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:&num[0]
*********************************************************************/
int* world::get_num(){//Accessor for the number of purchases

	return &num[0];
}



/*********************************************************************
 * ** Function:set_human
 * ** Description:setting dynamic array for human object
 * ** Parameters:n/a
 * ** Pre-Conditions:human object must created
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
void world::set_human(){//create dynamic array for human

	h = new human[num[0]];	

}


/*********************************************************************
 * ** Function:set_elf
 * ** Description:dynamic array
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
void world::set_elf(){//dynamic for elves

	e = new elf[num[3]];

}



/*********************************************************************
 * ** Function:get_elf
 * ** Description:return address
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:e
*********************************************************************/
elf* world::get_elf(){//accessor for elves

	return e;

}



/*********************************************************************
 * ** Function:get_balrog
 * ** Description:accessor
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:bal
*********************************************************************/
balrog* world::get_balrog(){

	return bal;

}



/*********************************************************************
 * ** Function:
 * ** Description:
 * ** Parameters:
 * ** Pre-Conditions:
 * ** Post-Conditions:
 * ** Return:n/a
*********************************************************************/
void world::set_balrog(){


	bal = new balrog[num[2]];

}


/*********************************************************************
 * ** Function:get_cyberdemon
 * ** Description:accessor
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:cyber
*********************************************************************/
cyberdemon* world::get_cyberdemon(){

	return cyber;

}



/*********************************************************************
 * ** Function:set_cyberdemon
 * ** Description: setting cyberdemon
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
void world::set_cyberdemon(){

	cyber = new cyberdemon[num[1]];

}



/*********************************************************************
 * ** Function:get_dragon
 * ** Description:accessory
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return: drag
*********************************************************************/
dragon* world::get_dragon(){

	return drag;
}


/*********************************************************************
 * ** Function:set_dragon
 * ** Description:mutator
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
void world::set_dragon(){

	drag = new dragon[num[4]];

}


/*********************************************************************
 * ** Function:~world()
 * ** Description:destructor
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
world::~world(){//destructor
	delete[] h;
	delete[] e;
	delete []bal;
	delete [] cyber;
	h = NULL;
	bal = NULL;
	e = NULL;
	cyber = NULL;
}


/*********************************************************************
 * ** Function:world
 * ** Description:copy constructor
 * ** Parameters:world &other
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
world::world(const world&other){//copy constructor

	for( int i = 0; i < 5; i ++ ){
		num[i] = other.num[i];
	}
	h = other.h;
	money = other.money;
	e = other.e;
	bal = other.bal;
	cyber = other.cyber;
}

/*********************************************************************
 * ** Function:operator=
 * ** Description:assignment operator
 * ** Parameters:world &other
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
void world::operator=(const world&other){//assignment operator

	delete[] h;
	delete[] e;
	delete[] bal;
	delete[] cyber;
	h = NULL;
	e = NULL;
	bal = NULL;
	cyber = NULL;

	for( int i = 0; i < 5; i ++ ){
		num[i] = other.num[i];
	}
	h = other.h;
	e = other.e;
	cyber = other.cyber;
	bal = other.bal;
	money = other.money;

}


