#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>


using namespace std;


void fun(int x[],int size){
int k = 0,zeros = 0, ones = 0;
x = new int(size);

for(int i =0; i < size; i++){

k = rand()%2;
x[i] = k;

if (x[i] == 0)
	zeros = zeros + 1;
if (x[i] == 1)
	ones = ones +1;
}
cout <<"You have " << zeros << " zeros and " << ones <<" ones!"<<endl;

}



int main(){
srand(time(NULL));
int size =0;
int *x = NULL;

cout <<"Enter the size of the array: ";
cin >> size;

fun(x,size);

return 0;
}
