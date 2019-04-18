#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

	int x; //variable to hold our random integer
	srand(time(NULL)); //seeds random number generator. do it just once	

	x = rand() % 5 + 1;
	//cout << "x = " << x << endl;
	
	if (x == 0){

		cout << "Bummer, I'm zero!!!" << endl;
	
	}
	 else if (x == 1 or x == 3 or x == 5){

		cout << "I'm an odd number!" << endl;		

	}
	 else{

		cout << "I'm an even number!" << endl;
	};
	
	
/*
	x = rand() % 5 + 1;
	cout << "x = " << x << endl;

*/
return 0;

};
