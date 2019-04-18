/*
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <iomanip>
using namespace std;


struct mult_div_values {

	int mult;
	float div;


};
*/
bool is_valid_dimensions(char *m, char *n){
	int first = 0, second = 0;
	for(int i =0; i < strlen(m);i++){
		if (m[i] < '0' or m[i] > '9')
			first = first + 1;
	}	

	for (int i =0; i < strlen(n);i++){
		if(n[i] < '0' or n[i] > '9')		
			second = second + 1;

	}
	if (m[0] == '0' or n[0] == '0')
		first = first + 1;


	if (first >= 1 or second >= 1){
		return false;
	}
	else{
		return true;
	}
}


mult_div_values** create_table (int rows, int cols){

	struct mult_div_values **x = new struct mult_div_values *[rows];
	for(int i =0; i < rows; i ++)
		x[i] = new struct mult_div_values [cols];

	return x;
}


void set_mult_values(mult_div_values**table, int m,int n){
	cout <<"\nMultiplication Table: "<<endl;
	for(int i = 0; i < m; i++){
		for (int j =0; j < n; j++){
			table[i][j].mult = ((i+1) * (j+1));
			cout << table[i][j].mult<<" ";
		}
		cout <<endl;
	}

}

void set_div_values(mult_div_values**table, int m, int n){
		cout<<"\nDivision Table: "<<endl;

		for(int i =0; i < m; i++){
			for(int j =0; j < n;j++){

			table[i][j].div = (float(i+1)/(j+1));

			cout<<setprecision(2) <<table[i][j].div<<" ";
			}
			cout<<endl;

		}

cout<<endl;
}

void delete_table(mult_div_values ** table, int rows){

	for(int i = 0; i < rows; i++)
		delete [] table[i];
	delete [] table;

}


int main(int argc, char*argv[]){

	int rows, cols, repeat=1; 
	bool checking;


	if (argc != 3){
		cout<<"Please enter the correct values"<<endl;
		return 0;
	}


	checking = is_valid_dimensions(argv[1],argv[2]);

	if (checking == false){
		cout<<"Invalid values"<<endl;
		return 0;
	}

	rows = atoi(argv[1]);
	cols = atoi(argv[2]);
do{
	mult_div_values** table =  create_table(rows,cols);

	set_mult_values(table,rows,cols);
	set_div_values(table,rows,cols);
		
	cout<<"Would you like to see a different size matrix (0-no,1-yes)? ";
	cin >> repeat;
	if(repeat == 1){
		cout<<endl<<"Rows: ";
		cin >> rows;
		cout<<endl<<"Columns: ";
		cin >> cols;
	}
 delete_table(table,rows);
	}while(repeat == 1);
	return 0;
}
