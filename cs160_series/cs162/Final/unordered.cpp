#include <iostream>
#include <ctime>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
	ofstream output;

	output.open("file.txt");

	srand(time(NULL));

	cout <<"Enter the number: ";
	long long x;

	cin >> x;

	for(int i = x; i > 0; i--)
		output <<i<<endl;
}
// 
