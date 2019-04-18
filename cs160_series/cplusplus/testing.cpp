#include <iostream>
//#include <cstring>

using namespace std;


int sum_elements(int x[][3]){
int total = 0;
for(int i =0; i < 3;i++){
	for(int j =0; j <3;j++){
		x[i][j] = i+1;
		total = total + x[i][j];}

}
return total;
}




int main(){

int x[3][3];
int total=0;
total = sum_elements(x);
cout <<"Your total is: " <<total<<endl;

return 0;
}
