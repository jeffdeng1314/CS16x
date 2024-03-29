/******************************************************
** Program: mini_compiler.c
** Author: Hao Deng
** Date: 06/11/2017
** Description: a mini compiler that allows the user to input brackets, parenthesises, and braces and check if the compiler accepts it or not.
** Input: header.h, user inputs a character array of [] () {}
** Output: checks if the user follows the rule and provide two results; either accepts it or rejects it
******************************************************/

#include "header.h"

/*********************************************************************
 * ** Function: int checking(char str[])
 * ** Description: a function that checks whether if the user inputs only brackets, braces and parenthesises.
 * ** Parameters: char str[]
 * ** Pre-Conditions: str array must exist first and call from main function 
 * ** Post-Conditions: checks if the array only contains [] {} ()
 * ** Return: 0 if it contains other characters, and 1 if it's not
*********************************************************************/
int checking(char str[]){
	int i,num = 0, space = 0;
	
	for(i = 0; i<(strlen(str)-1);i++){
		//printf("%c\n",str[i]);
		if((str[i]=='\0')){
			break;
			//continue;
		}


		if(str[i] == '[' || str[i] == ']' || str[i] == '{' || str[i] =='}' || str[i] == '(' || str[i] == ')'){

			num= num+1;
		}
		if(str[i] == 32){
			space = space + 1;
		}


	}

	if(num == ((strlen(str)-1)-space)){
		return 1;
	}
	else{
		return 0;
	}
	return 0;

}


/*********************************************************************
 * ** Function: int bracket_checking()
 * ** Description: After checking if the string only contains [] () {}, check this time to see if they open and close properly and see if they follow the rule
 * ** Parameters:char str[]
 * ** Pre-Conditions: the checking function must be run first to check for other characters before this one runs
 * ** Post-Conditions: check for the if the brackets, braces, parenthesises are opened and closed properly
 * ** Return: 0 if it's not, and 1 if it's true.
*********************************************************************/
int bracket_checking(char str[]){

	int open[100], close[100];
	int i,x = 0, y,z=0;


	for(i = 0; i < (strlen(str)-1); i++){
		if(str[i] == '['){
			open[z] = 0;
			z = z + 1;
		}
		else if(str[i] =='('){
			open[z] = 2;		
			z = z + 1;
		}
		else if(str[i] == '{'){
			open[z] = 1;				
			z = z + 1;
		}
		printf("z: %d\n", open[z] );

		if(str[i] == ']'|| str[i] == '}' || str[i] == ')'){
			if(str[i] == ']'){
				close[x] = 0;	
				x++;

			}
			else if(str[i] == '}'){
				close[x] = 1;
				x++;
			}
			else if(str[i] ==')'){
				close[x] == 2;
				x++;
			}
			//x++;
/*
			for(y = (i-1); y > 0; y--){
				if(open[z] == close[x]){
					open[z] = '\0';
					close[x] = '\0';
					if(z > 0){
						z--;
					}
					if(x > 0){
						x--;
					}

				printf("x: %d\n", close[x]);
				}*/
			}
		}

return 0;
	}





/*********************************************************************
 * ** Function: main()
 * ** Description: the main function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions: create array and call functions to check for user's input
 * ** Return:n/a
*********************************************************************/
int main(){
	char str[100];

	int check, bracket_check = 0;
while(bracket_check == 0){
		check = 0;
		while(check == 0){
			printf("Please enter below\n");
			fgets(str,sizeof(str),stdin);

			check = checking(str);
			if(check == 0)
				printf("Please enter only brackets, braces, and/or parenthesis\n");
		}

		bracket_check = bracket_checking(str);
		if(bracket_check == 0)
			printf("%s would be rejected\n", str);
		else
			printf("%s would be accepted\n", str);

}




}
//          
//          
//          
//          
//          
//              