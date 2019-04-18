/*********************************************************************
 *  ** Program Filename: Bowling2
 *   ** Author:Jeff Deng
 *    ** Date:4th March 2017
 *     ** Description: A program that allows the players to bowl and compete with friends
 *      ** Input: Number of players, the names for the players, and "enter" to bowl
 *       ** Output: The names for players and the score for each bowl.
 *        *********************************************************************/

#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
#define FRAMES 10
#define COLS 21


void deleting_name_mem(int number_players,char **&p);
void layout(int i, char **&players,int bowl_score,int n,int k,int **&scores);


/*********************************************************************
 *  ** Function:players_amount
 *   ** Description:asking for the number of players
 *    ** Parameters:numbers_players
 *     ** Pre-Conditions:called from main function
 *      ** Post-Conditions:assigning names into the array in the heap
 *       ** Return:n/a
 *        *********************************************************************/
void players_amount(int &numbers_players){

    bool input = true;
    while (input == true){
        cout <<"How many players: ";
        cin >> numbers_players;
        cin.ignore(256,'\n');
        if (cin.fail()||numbers_players < 0){
        
            cout <<"Please enter the valid number of players!"<<endl;
            cin.clear();
            cin.ignore(256,'\n');

        }
        else{
            input = false;
        }
    }
}

/*********************************************************************
 *  ** Function:header
 *   ** Description:print out the header for the score board
 *    ** Parameters:n/a
 *     ** Pre-Conditions:n/a
 *      ** Post-Conditions:printing out the score board header
 *       ** Return:n/a
 *        *********************************************************************/
void header(){

    cout <<"Name    | ";
    cout <<" 1        |     2      |      3     |     4      |     5      |     6      |     7      |     8      |     9      |     10      | Total     "<<endl;
    
    cout <<"-------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

}



int frame_total_score(int **scores,int i, int j){


    return scores[i][j] + scores[i][j-1];
    

}



int total_initialization(int number_players,int total[],int n){
    int i;
    total[number_players]=total[number_players];
    for ( i =0;i < number_players; i++){
        total[i] = 0;
    }
    

    return total[i] = n;

}





/*********************************************************************
 *  ** Function:board
 *   ** Description:printing out the score board on screen
 *    ** Parameters:number_players,scores,frame_array
 *     ** Pre-Conditions:the number of players must exist, along with the scores
 *      ** Post-Conditions:printing out the score board for each player
 *       ** Return:n/a
 *        *********************************************************************/
void board(int number_players, char **players,int **scores,int frame_array[][10]){
    header();
    int j,i,y,n;
    int total[number_players];
    for(i =0; i < number_players;i++){
        n = 0;
        cout << players[i]<<"    | ";
            
        for(j=0;j<20;j++){
            if (j % 2 == 0){
                if (scores[i][j] == 10){
                    cout <<'x' << "  ";
                    continue;
                    
                }
                else if (scores[i][j] == 0){
                
                    cout <<'-' << "  ";
                }
                else{
                    cout <<scores[i][j]<<"  ";
                }
            }
            else if (j % 2 == 1){
                if (scores[i][j] == 10){
                    cout <<'x';
                    
                }
                else if (scores[i][j] == 0){
                    
                    cout <<'-';
                }
                else{
                cout << scores[i][j];
                }
                y = frame_total_score(scores,i,j);
                cout << " = " <<y << "  |  ";
                n = n +y;
            }
            total[i] = total_initialization(number_players,total,n);
        }

        cout <<total[i];
        cout <<endl;
        cout <<"-------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
       /*
 *         for(int k =0;k < 10;k++)
 *                     cout <<frame_array[i][k]<<"  ";
 *                             */
        cout<<endl;

    }
    

}



/*********************************************************************
 *  ** Function: create_memories
 *   ** Description: creating memories for the player names
 *    ** Parameters: number_players, p
 *     ** Pre-Conditions: called from main
 *      ** Post-Conditions: assigning the names into an array
 *       ** Return:n/a
 *        *********************************************************************/
void create_memories(int number_players,char **&p){

    char user_name[21];
    p = new char*[number_players];
    for (int i = 0; i < number_players; i++){
        p[i] = new char[1];
    }

    for (int i = 0; i < number_players; i++){
        cout <<"Enter Player " << i + 1 << "'s name: ";
        cin.getline(user_name,20);
        strcpy(p[i],user_name);
    
    }


}




/*********************************************************************
 *  ** Function:deleting_name_mem
 *   ** Description:deleting the spaces for the player names in the heap
 *    ** Parameters:number_players,p
 *     ** Pre-Conditions:the array must exist in the heap
 *      ** Post-Conditions: deleting the spaces in the heap after using them
 *       ** Return:n/a
 *        *********************************************************************/
void deleting_name_mem(int number_players,char **&p){/*use it at the end of the program*/

	for (int x = 0; x < number_players; x++){
		delete [] p[x];
	}
	delete []p;
	p = NULL;

}



/*********************************************************************
 *  ** Function:random_number
 *   ** Description:random num generator for gutter, spare, and strike, or just regular bowling
 *    ** Parameters:pins, random_num
 *     ** Pre-Conditions: ctime library for random num
 *      ** Post-Conditions: the random num will be the score for that chance for the user
 *       ** Return:n/a
 *        *********************************************************************/
int random_number(int &pins,int &random_num){/*random gen*/

	if (random_num == 0 ){

		cout <<"awe, you got a gutter ball, 0 pins" <<endl<<'\n';
		return random_num;
	}
	else if (random_num == 10){

		cout <<"Nice!!! You have landed a strike! 10 pins" <<endl<<'\n';
		return random_num;

	}
	else{

		cout <<"You knocked down " << random_num << " pins." <<endl<<'\n';
		return random_num;
	}

	return 0;
}


void clear_array(int **scores,int number_players){

	for (int m =0; m < number_players; m++){

		delete scores[m];
	}
	delete []scores;
	scores = NULL;



}





/*********************************************************************
 *  ** Function: bowling
 *   ** Description: allow the user to hit enter to bowl
 *    ** Parameters:number_players,players
 *     ** Pre-Conditions: called from main function and pre-defined values
 *      ** Post-Conditions:players have their scores added to their frames
 *       ** Return:N/A
 *        *********************************************************************/
int bowling(int number_players, char **players){/*enter to bowl*/

	int y,k,i;
	int **scores = new int*[number_players];
	for (int m = 0; m < number_players; m++){
		scores[m] = new int[20];
		for(int j =0; j < 20; j++){

			scores[m][j] = '\0';

		}
	}

	for (k = 0; k < (FRAMES); k++){
		for (i =0; i < number_players; i++){
			int n = 2, pins = 10,frame_array[number_players][10],frame_score = 0;
			y = 0;
			while (n != 0){
				cout <<"\nPlayer " << i + 1 << ", press enter to bowl.";
				cin.get();
				int random_num = rand()%(11-y);
				y = random_number(pins,random_num);
				for(int m =0;m < 10;m++)
					frame_array[i][m] = 0;
				frame_array[i][k] = frame_score;

				if (y == 10){
					layout(i,players,y,n,k,scores);
					board(number_players,players,scores,frame_array);
					break;
				}

				layout(i,players,y,n,k,scores);
				board(number_players,players,scores,frame_array);
				frame_score = frame_score + y;
				n--;
			}


		}
	}
	clear_array(scores,number_players);
	return 0;
}






/*********************************************************************
 *  ** Function: layout
 *   ** Description: each bowl has its own score placement, 2 scores per frame
 *    ** Parameters: i, player, bowl_score,n,k,scores
 *     ** Pre-Conditions:it has to be called from a function that declared n as 2
 *      ** Post-Conditions: adding scores to the scoring arrays
 *       ** Return:none
 *        *********************************************************************/
void layout(int i, char **&players,int bowl_score,int n,int k,int **&scores){

	if (n == 2){
		(scores)[i][k*2] = bowl_score;
	}
	if (n == 1){

		(scores)[i][(k*2)+1] = bowl_score;

	}
}




/*********************************************************************
 *  ** Function: main
 *   ** Description: the main function
 *    ** Parameters: n/a
 *     ** Pre-Conditions:n/a
 *      ** Post-Conditions:n/a
 *       ** Return:n/a
 *        *********************************************************************/

int main(){

	srand ((unsigned int)time(NULL));
	int number_players = 0;
	char **players;
	players_amount(number_players);
	create_memories(number_players,players);

	bowling(number_players,players);
	deleting_name_mem(number_players, players);
	return 0;
}

