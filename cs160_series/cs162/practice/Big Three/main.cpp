#include "header.hpp"
#include "vehicle.hpp"
#include "driver.hpp"


void print_info(driver*, vehicle&);



int main(){
	vehicle v1;
	int num = 0,x = 0;
	
	string name,vehicle_type;

	cout <<"Number of vehicles: ";
	//cin >> x;
	cin>>x;
	v1.set_num_drivers(x);
	v1.set_driver_name();
	driver *driver_access = v1.get_driver_name();
	
	//vehicle v1 *array = new v1[num];
	//driver *driver_access = 

	cout <<endl;
	cin.ignore();
	cin.clear();
	//v1 = new vehicle[v1.get_num_drivers()];


	//for(int i = 0; i < num; i++){




	//}





	for(int i = 0; i < v1.get_num_drivers(); i++){
		cout <<"Driver "<<i+1<<"'s name: ";
		getline(cin,name);
		//cout <<name<<endl;
		driver_access[i].set_names(name);
		//cout <<name<<endl;
		//cout <<"hi"; 
		//cout <<"Driver "<<i<<": "<<driver_access[i].get_names()<<endl;
		//cout <<endl;
		cout <<"Vehicle Type: ";
		getline(cin,name);
		v1.set_type(name);
		//cout <<name<<endl;

		cout <<"Number of wheels: ";
		cin >>x;
		v1.set_wheels(x);
		cin.ignore();
		cin.clear();

		cout <<endl;
	}

	cout <<"hi";
	print_info(driver_access, v1);
}

void print_info(driver* driver_access, vehicle &v1){

	int j;



		for(j = 0; j < v1.get_num_drivers(); j++){
		//cout <<"hsdfsd";
		cout <<"Driver "<<j+1<<": "<<driver_access[j].get_names()<<endl;
		cout <<"Type: "<<v1.get_type()<<endl;
		cout <<"Wheels: "<<v1.get_wheels()<<endl; 
	}


}

//                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          