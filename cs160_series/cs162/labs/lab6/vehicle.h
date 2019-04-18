#pragma once
#include "header.h"

//#include "race.h"

class vehicle{

	protected:
	int wheel;
	int speed;
	bool motorizedCar;
	string  type_vehicle;
	Creature *driver;

	public:
	vehicle();
	void set_wheel (int);
//	void set_speed (int);
	void set_motorizedCar(bool);
	int get_wheel();
	int get_speed();
	bool get_motorizedCar();
	bool operator>(const vehicle &);
	bool operator<(const vehicle&);


//////////////////////////////////////////////////////
	Creature * getDriver(void);
	void setDriver(Creature *);
	int getDistance (void);
	void set_speed (int);
	string getVehicle(void);
};
