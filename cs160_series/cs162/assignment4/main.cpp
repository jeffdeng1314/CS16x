#include "header.hpp"
#include "pokemon.hpp"
#include "location.hpp"
#include "event.hpp"
#include "flying.hpp"
#include "rock.hpp"
#include "psychic.hpp"
#include "cave.hpp"
#include "pokestop.hpp"
#include "trainer.hpp"


bool checking(int ,char*, char*);
void trainer_moving(location&, trainer&, int ,int);




/*********************************************************************
 * ** Function: main
 * ** Description: the main function
 * ** Parameters: argc *argv[]
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
int main(int argc, char*argv[] ){

	srand(time(NULL));
 
 	int row = 0;//for player
	int column = 0;//for player

	bool check = true;
	check = checking(argc,argv[1],argv[2]);

	if (check == false){
		cout <<"Byeeeee"<<endl;
		return 0;
	}


	#ifdef DEBUG
	cout <<endl;
	cout <<"You're in debug mode boiiii"<<endl;
	#endif


	location l1;
	trainer trainer_1;
	pokestop ps1,ps2,ps3;
	
	l1.set_trainer(&trainer_1);	
	l1.set_grid(argv[1],argv[2]);
	l1.board_set();
	
	
	(l1.get_board())[0][0] = trainer_1.trainer_indicator();//dereferenced twice
	
	l1.grid();

for(int i = 0; i < 10; i++)
	trainer_moving(l1,trainer_1, row, column);

	



}



/*********************************************************************
 * ** Function: trainer_moving
 * ** Description: allowing the player to move around
 * ** Parameters: location &l1, trainer &trainer_1, int row, int column
 * ** Pre-Conditions: location object and trainer object must be made
 * ** Post-Conditions: allow the player to move in the grip
 * ** Return:n/a
*********************************************************************/
void trainer_moving(location &l1, trainer &trainer_1, int row, int column){


	
		int x = 0;
		cout <<"Indicate where you want to move (1-up, 2-down, 3-left, 4-right): ";
		cin >> x;

		switch(x){

			case 1:
				
				(l1.get_board())[row - 1][column] = (l1.get_board())[row][column];
				(l1.get_board())[row][column] = ' ';
				row = row - 1;
				
				break;
			case 2:

				(l1.get_board())[row + 1][column] = (l1.get_board())[row][column];
				(l1.get_board())[row][column] = ' ';
				row = row + 1;
				break;
			case 3:
				
				(l1.get_board())[row][column - 1] = (l1.get_board())[row][column];
				(l1.get_board())[row][column] = ' ';
				column = column - 1;
				break;
			case 4:
				(l1.get_board())[row][column + 1] = (l1.get_board())[row][column];
				(l1.get_board())[row][column] = ' ';
				column = column + 1;
				break;

			default:
				cout <<"Please input the valid number"<<endl;

		}
		//(l1.get_board())[row][column] = ' ';
		l1.grid();
	}




/*********************************************************************
 * ** Function: checking
 * ** Description: checking for error handling
 * ** Parameters: argc, *rows, *column
 * ** Pre-Conditions:command line arguments
 * ** Post-Conditions: check for errors
 * ** Return:true or false
*********************************************************************/
bool checking(int argc, char *rows, char *columns ){		

		int x = 0;
		int y = 0;

		if (argc != 3){
			return false;
		}

		if (atoi(rows) <= 3 && atoi(columns) <= 3)
			return false;

		for(int i = 0; i <strlen(rows); i++){

			if (rows[i] > '0' && rows[i] <= '9')
				x = x + 1;
		}

		for(int i = 0; i <strlen(columns); i++){

			if (columns[i] > '0' && columns[i] <= '9')
				y = y + 1;
		}

		if (x == strlen(rows) && y == strlen(columns))
			return true;
		else
			return false;

}


//
