#include <iostream>
#include <cstring>


using namespace std;


int fun(int a[],int size){

	a = new int[size];
	int temp = 0,num = 0;
	cout<<"Please enter the numbers"<<endl;
	for (int i = 0; i < size; i++){
		cout<<"Number " << i+1 <<" : ";
		cin>>num;
		a[i] = num;
			
	}
	for(int j = 0; j < size; j++){
		if(a[j] >=temp)
			temp = a[j];

		}

return temp;
}



int main(){

	int *a=NULL;
	int size=0;
	int largest = 0;
	cout<<"Enter the size for the array ";
	cin >> size;

	largest = fun(a,size);
	cout <<endl;
	cout<<"The largest number is: " <<largest<<endl;

return 0;
}

