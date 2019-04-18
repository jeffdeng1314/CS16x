#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main(){

	ofstream out;

	out.open("char.txt");

	for(int i =0; i < 100; i ++)
		out << "ab" <<endl;	

}
