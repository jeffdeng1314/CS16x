#include<iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
using namespace std;


int fun(int *a,int size){
	int temp = 0;
	int x = 0;
	a = new int [size];
	for(int i =0; i<size;i++){
		x = rand()%26;
		cout <<"Number "<< i +1 <<" : "<<x<<endl;
		a[i] = x;
		if(a[i]>= temp)
			temp = a[i];
		} 

return temp;
}




int main(){
srand(time(NULL));
int *a = NULL;

int size = 0;
int largest = 0;
cout<<"Please enter the size of the string: ";
cin >>size;

largest = fun(a,size);
cout<<"The largest number is: " <<largest<<endl;

}
