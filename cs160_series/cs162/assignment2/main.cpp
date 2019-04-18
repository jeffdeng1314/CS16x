#pragma once

#include "header.h"
#include "cart.h"
#include "librarian.h"
#include "library.h"
#include "structs.h"
#include "patron.h"
void choice (int, library &);



/*********************************************************************
 * ** Function:main
 * ** Description:the main function
 * ** Parameters: n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:runs the code and call the functions
 * ** Return:n/a
 * *********************************************************************/ 
int main(){
	
	int x = 0;
	bool y = true;	

	library lib;
	
	//reading_database(lib);	

	while (y == true){
		cout<<"Hi! Welcome to the Young Jeffy Money Library "<<endl;
		cout<<endl;
		cout<<"Please select one of the option to proceed: "<<endl;
		cout<<"(1) Show library operation hours"<<endl;
		cout<<"(2) Login as patron "<<endl;
		cout<<"(3) Login as librarian"<<endl;
		cout<<"(4) Quit"<<endl;
		cin >> x;

		if (x == 4){
			cout <<"Thanks for using this library system software, now bye bro!!!! Get out of here"<<endl;
			y = false;
		}
		else if (x == 1 || x == 2 || x == 3){
			choice (x, lib);
								
		}
		else if (x >= 0 || x >= 5 || cin.fail()){
			cout <<"Please try again"<<endl;
			cin.clear();
			cin.ignore(256,'\n');
		}

	}
	return 0;
}
