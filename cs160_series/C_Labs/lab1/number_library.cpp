#include <iostream>
#include <cmath>

using namespace std;

int main(){

	long res1 = pow (2,32) + 1;
	float res2 = pow (5.0 , 3);
	int res3 = sqrt(25);
	int res4 = 34 % 5;
	int res5 = abs (-50);
	long res6 = sqrt(pow (2,64));


	cout << "2^32 + 1 = " << res1 << endl;
	cout << "5.0^3 = " << res2 << endl;
	cout << "√25 = " << res3 << endl;
	cout << "34.0 mod 5 = " << res4 << endl;
	cout << "|-50| = " << res5 << endl;
	cout << "√2ˆ64 = " << res6 << endl;

	return 0;

}
