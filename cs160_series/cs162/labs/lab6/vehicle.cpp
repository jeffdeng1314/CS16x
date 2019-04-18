#include "header.h"
#include "vehicle.h"
//#include "race.h"

vehicle::vehicle(){

	wheel = 0;
	speed = 0;
	type_car = "car";
	driver = NULL;
	motorizedCar = true;
		
}


void vehicle::set_wheel(int w){

	wheel = w;

}

void vehicle::set_speed(int s){


	speed = s;
}

void vehicle::set_motorizedCar(bool m){

	motorizedCar = m;

}


int vehicle::get_wheel(){

	return wheel;

}


int vehicle::get_speed(){

	return speed;

}


bool vehicle::get_motorizedCar(){

	return motorizedCar;

}

bool vehicle::operator>(const vehicle&other){
	return this->speed>other.speed;

}
bool vehicle::operator<(const vehicle&other){
	return this->wheel>other.wheel;

}



/////////////////////////////////

string vehicle::getVehicle(void){

	return type_vehicle; 

}



Creature * vehicle::getDriver(){

	return driver;

}


void vehicle::setDriver(Creature * c){

	driver = c;

}



void vehicle::set_speed(int s){


	speed = s;
}


int vehicle::getDistance(){
	
	return (wheel * speed);
	
}



