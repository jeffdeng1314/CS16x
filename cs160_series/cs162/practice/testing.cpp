#include "testing.h"
#include <string>

void people::setName(string x){

	name = x;

}


string people::getName(){
	return name;
}


void people::setAge(int y){

	age = y;

}

int people::getAge(){

return age;
}



int main(){
	int age;
	string name;
	people bo;
	cout<<"Please enter your name"<<endl;
	getline(cin, name);
	bo.setName(name);
	cout<<"Please enter your age"<<endl;
	cin >> age;
	bo.setAge(age);
	cout<<"your name is: "<<bo.getName()<<endl;
	cout<<"Your age is: "<<bo.getAge()<<endl;


}
