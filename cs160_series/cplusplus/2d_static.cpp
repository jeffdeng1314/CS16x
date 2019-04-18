#include <iostream>
#include <cstring>

using namespace std;
int sum_elements(int x[][3]);

int main(){

int x[3][3];
int lol = 0;
lol = sum_elements(x);
cout <<"your total is : " << lol <<endl;
return 0;
}

int sum_elements(int x[][3]){
int total = 0;
for (int i =0; i < 3; i++){
	for(int j=0;j<3;j++){
		x[i][j] = i+1;
		total = total + x[i][j];}
}

return total;

}
