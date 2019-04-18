
#include <iostream>
#include <cmath>
using namespace std;


int main(){


	int i = 0;
	cout <<"How many bytes do you want to input: "<<endl;
	cin >> i;

	if(i < 0){
		cout <<"Please enter a number that's between 0 - 8"<<endl;
		return 0;
	}
	else if(i > 8){
	
		cout <<"Please enter a number that's between 0 - 8"<<endl;
		return 0;
	}

	cout <<"Max Signed: "<<(pow(2,i)-1)<<endl;
	cout <<"Min Signed: "<<-pow(2,i)<<endl;
	cout <<"Max Unsigned: "<<(pow(2,i+1)-1)<<endl;
	cout <<"Min Unsigned: 0"<<endl;

}

