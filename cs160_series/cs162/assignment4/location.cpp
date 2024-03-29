#include "header.hpp"
#include "location.hpp"

/*********************************************************************
 * ** Function: location()
 * ** Description: the constructor function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
location::location(){
	rows = 0;
	columns = 0;
	board = NULL;

}

/*********************************************************************
 * ** Function: set grid
 * ** Description: seting the char into int
 * ** Parameters:*row, *column
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
void location::set_grid(char *row, char* column){
	//rows = a;	
	 rows = atoi(row);
	 columns = atoi(column);
	//board[rows][columns];

	 //cout <<board[0][0]<<endl;
}



/*********************************************************************
 * ** Function: board_set
 * ** Description: creating the white spaces in betweeen
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
void location::board_set(){

	board = new char*[rows];
	
	for(int i=0; i < rows; i ++){
		board[i] = new char[columns];
		for(int j = 0; j < columns; j++){
			board[i][j] = ' ';
		}
	}

}

/*********************************************************************
 * ** Function: grid()
 * ** Description: location grid
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
void location::grid(){

	//int columns = atoi(column);


	for(int i = 0; i < rows; i++){
		for (int j = 0; j < columns; j++){
			cout <<'|';
			//cout <<"    ";
			cout << "  "<<board[i][j]<<"  ";
			//cout <<endl;
			
		}
		cout <<'|';
		cout <<"     ";
		cout<<endl;
		if (i < (rows - 1)){
			for(int k = 0; k < ((columns * 5)+ (columns+1)); k ++)
					cout<<"-";
		}
		cout <<endl;
	}
}

/*********************************************************************
 * ** Function: get_board
 * ** Description: accessor
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:board
*********************************************************************/
char ** location::get_board(){
	return board;
}

/*********************************************************************
 * ** Function: get_trainer
 * ** Description: accessor
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:t1
*********************************************************************/
trainer* location::get_trainer(){

	return t1;

}

/*********************************************************************
 * ** Function: get_event
 * ** Description: accessor
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:e1
*********************************************************************/
event* location::get_event(){
	return e1;
}

/*********************************************************************
 * ** Function: set_trainer
 * ** Description: mutator
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
void location::set_trainer(trainer* input){

	t1 = input;
}


/*********************************************************************
 * ** Function: set_event
 * ** Description: mutator
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:default value
 * ** Return:n/a
*********************************************************************/
void location::set_event(event* input){

	e1 = input;
}


/*********************************************************************
 * ** Function: location()
 * ** Description: the destructor function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:clear default value
 * ** Return:n/a
*********************************************************************/
location::~location(){

	for(int i = 0; i < rows; i++){
		delete [] board[i];

	}
	delete [] board;
}

//                                                                                                                                                                         