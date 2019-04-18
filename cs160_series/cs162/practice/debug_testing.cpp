#include <iostream>
#include <cstdlib>

using namespace std;

int main(){


	#ifdef DEBUG
		cout <<"debug mode"<<endl;
	#endif 
	cout <<"non-debug"<<endl;

}

