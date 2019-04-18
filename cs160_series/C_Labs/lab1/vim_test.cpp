#include <iostream>

using namespace std;

int main(){

	int number;
	cout << "Do you like vi as an editor?\n Enter 1 for yes, 2 for no: ";
	cin >> number;

	if (number == 1){
		cout <<" You love vi!\n";
	}else if (number == 2){
		cout<<"you hate vi!\n";
	}else {
		cout<<"please enter correct value"<< endl;
	}

}
