#include <iostream>
#include <cstring>

using namespace std;
int fun(int*,int);

int main(){

int *array = NULL;
int size=0,hundreds=0;

cout <<"Enter the size for the array: ";
cin >> size;

hundreds = fun(array,size);

cout <<"You have " <<hundreds << " of 100s"<<endl;
return 0;
}

int fun(int a[],int size){
int total = 0,scores = 0;
a = new int [size];

cout <<"Please enter the test scores"<<endl;
for(int i =0; i < size; i++){
	cin >>scores;
	a[i] = scores;
	if(a[i] == 100)
		total = total + 1;
	}

return total;
}
