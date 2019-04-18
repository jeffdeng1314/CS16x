#include <iostream>
#include <string>

using namespace std;

int main(){

	int choice;
	string answer;

	do{
		cout <<"Hi! Welcome to the guessing TA game!\n";
		cout <<"Enter the following numbers to look for clues!"<<endl;

		cout <<"1) Hair color\n2) Gender\n3) Favorite animal\n4) Academic Standard\n5) Guess the name\n6) Quit the game\nYour choice: "<<endl;

		cin.clear();	
		cin >> choice;

		if (choice == 1){

			cout << "\nWhat is the hair color of this TA?: ";
			cin >> answer;

			if (answer == "Blonde" || answer == "blonde"){
				cout << "\nGood Job! You entered: " << answer << endl;
			}else {
				cout << "\nPlease try again" << endl;
			}

		}


	}while(choice!=6);	


}
