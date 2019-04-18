#include "header.hpp"
#include "driver.hpp"

driver::driver(){
	 driver_names = "Unknown";
}

void driver::set_names(string name){
	driver_names = name;
}


string driver::get_names(){
	return driver_names;
}

driver::driver(const driver&other){
	driver_names = other.driver_names;
}

void driver::operator=(const driver &other){
		driver_names = other.driver_names;
}

driver::~driver(){
	
}
