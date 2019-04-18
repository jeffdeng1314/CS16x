#include "header.hpp"
#include "vehicle.hpp"

vehicle::vehicle(){
	type = "Unknown";
	wheels = 0;
	drivers = NULL;
	num_drivers = 0;
}


void vehicle::set_type(string type){
	this->type = type;
}

void vehicle::set_wheels(int wheels){
	this->wheels = wheels;
}

void vehicle::set_driver_name(){

	drivers = new driver[num_drivers];

}

void vehicle::set_num_drivers(int num){
	num_drivers = num;
}


int vehicle::get_num_drivers(){
	return num_drivers;
}

string vehicle::get_type(){
	return type;
}

int vehicle::get_wheels(){
	return wheels;
}

driver* vehicle::get_driver_name(){
	return drivers;
}

vehicle::vehicle(const vehicle&other){
	type = other.type;
	wheels = other.wheels;
	num_drivers = other.num_drivers;
	drivers = new driver [num_drivers];
	for(int i = 0; i < num_drivers; i++)
		drivers[i] = other.drivers[i];


}


void vehicle::operator=(const vehicle&other){
	delete []drivers;
	drivers = NULL;

	type = other.type;
	wheels = other.wheels;
	drivers = new driver [num_drivers];
	for(int i = 0; i < num_drivers; i++)
		drivers[i] = other.drivers[i];

}

vehicle::~vehicle(){
	delete [] drivers;
	drivers = NULL;
}