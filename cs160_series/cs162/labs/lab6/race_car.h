#pragma once
//#include "race.h"
#include "header.h"
#include "vehicle.h"



class race_car:public vehicle{

	private:
		static const string description;
	public:
		static const string get_description();


};
