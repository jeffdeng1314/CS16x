#pragma once
#include "header.h"
#include "cart.h"
#include "librarian.h"
#include "library.h"
#include "structs.h"
#include "patron.h"
void view_books(library &);
void patron_function(library &);
void librarian_function (library &);
/////////////////////////////////////////////////////////Open Files/////////////////////////////////////////
void library_database();
void library_time();



/*********************************************************************
 * ** Function:choice
 * ** Description:the choices as the user selects
 * ** Parameters: int option, library &lib
 * ** Pre-Conditions: call from the main function where when the user selects something
 * ** Post-Conditions:enter password for either patron or librarian
 * ** Return:n/a
 * *********************************************************************/ 
void choice (int option, library &lib){
	ifstream patron_login, librarian_login;

	char temp [50];
	char id[50] ;
	bool x = true;
	if (option == 2){
		patron_login.open("patron_login.txt");
		patron_login >> temp;
		patron_login.close();
		while(x == true){
			cout<<"Please enter the login ID for patron: ";	
			cin >> id;
			if (strcmp(temp,id) == 0){
				patron_function(lib);
				x = false;
			}
			else if(strcmp(temp,id) > 0 || strcmp(temp,id) < 0){
				cout<<"No good"<<endl;
			}
		}
	}
	else if( option == 3){
		librarian_login.open("librarian_login.txt");
		librarian_login >> temp;
		librarian_login.close();
		while(x == true){
			cin.ignore();
			cout<<"Please enter the login ID for librarian: ";	
			cin >> id;
			if ( strcmp(temp, id) == 0 ){
				librarian_function(lib);
				x = false;
			}
			else{
				cout<<"No Good"<<endl;
			} 
		}
	}

	else {
		library_time();
			
	}


}


/*********************************************************************
 * ** Function:patron_function
 * ** Description:when you login as a patron
 * ** Parameters: library &lib
 * ** Pre-Conditions: select from the user
 * ** Post-Conditions: become the patron
 * ** Return:n/a
 * *********************************************************************/ 
void patron_function(library &lib){
	int x = 0;
	bool y = true;


	do{
		//system("clear");
		cout<<"Hi Patron! \n"<<endl;
		cout<<"(1) View all the books"<<endl;
		cout<<"(2) Search Books"<<endl;
		cout<<"(3) Hours for the library operation"<<endl;
		cout<<"(4) log out "<<endl;
		cin >> x;
		if (x == 4){
			return ;
		}
		else if (x == 1 or x == 2){
			view_books(lib);
		}
		else if ( x == 3 ){
		cout <<"hi"<<endl;
		library_time();
		}
		else if ( x >= 5 || x <= 0 || cin.fail()){
			cout<<"Please try again!\n"<<endl;		
			cin.clear();
			cin.ignore(256,'\n');
		}
	}while(y == true);

}

/*********************************************************************
 * ** Function:librarian_function
 * ** Description:when you login as a librarian
 * ** Parameters: library &lib
 * ** Pre-Conditions: select from the user
 * ** Post-Conditions: become the librarian
 * ** Return:n/a
 * *********************************************************************/ 

void librarian_function(library &lib){
	int x = 0;
	bool y = true;
	do{
		//system("clear");
		cout<<"Hi Librarian! \n"<<endl;
		cout<<"(1) Adjust the library hours of operation"<<endl;
		cout<<"(2) View books in the library"<<endl;
		cout<<"(3) Access to cart"<<endl;
		cout<<"(4) log out "<<endl;
		cin >> x;
		if (x == 4){
			return ;
		}
		else if (x == 2){
			view_books(lib);
		}
		else if (x == 1){
		library_time();
		}	
	
		else if ( x == 3 ){
			cout <<"librarian cart option function"<<endl;
			y = false;
		}
		else if ( x >= 5 || x <= 0 || cin.fail()){
			cout<<"Please try again!\n"<<endl;		
			cin.clear();
			cin.ignore(256,'\n');
		}
	}while(y == true);


}


/*********************************************************************
 * ** Function:view_books
 * ** Description:when the patron or the librarian wants to view the books
 * ** Parameters: library &lib
 * ** Pre-Conditions:called from the function
 * ** Post-Conditions: display the books in the library
 * ** Return:n/a
 * *********************************************************************/ 

void view_books(library &lib){
	
	bool hi = true;
	int x = 0;
do{
	cout << "Hi, please select the following options: "<<endl;
	cout <<"(1) List of Books from the library database"<<endl;
	cout <<"(2) List the books that are currently available to check out"<<endl;
	cout <<"(3) Quit"<<endl;
	cin >> x;
	
	if( x == 3)
		return;
	else if (x == 1){
	/*
		for(int i = 0; i < 7; i++){
			cout<<"Book Title: "<<lib.books[i]->title<<endl;
			cout<<"Year: "<<lib.books[i]->year<<endl;
			cout<<"Number of Authors: "<<lib.books[i]->num_authors<<endl;
			cout<<"Authors:"<<endl;
			for(int j = 0; j < lib.books[i]->num_authors; j++)
				cout<<lib.books[i]->authors[j]<<endl;
			cout<<"-----------------------------------";
		}	*/
		library_database();
	}
	else if (x == 2){

		cout<<"check out books"<<endl;
		hi = false;
	}
	else if (x >= 4 || x <= 0 || cin.fail()){
		cin.clear();
		cin.ignore(256,'\n');
		cout<<"Please try again"<<endl;

	}

 	
}while(hi == true);


}


/*********************************************************************
 * ** Function: library_database
 * ** Description: the library database that prints out the books
 * ** Parameters: n/a
 * ** Pre-Conditions: called from functions
 * ** Post-Conditions: prints out books
 * ** Return:n/a
 * *********************************************************************/ 
void library_database(){
	string name;
	int year = 0;
	int num_authors = 0;
	string author_name;
	ifstream input;
	
	input.open("books_database.txt");

	for (int i = 0; i < 7; i++){
		getline(input, name);
		cout <<"Title: "<<name<<endl;
		input >> year;
		cout <<"Year: "<<year<<endl;
		input >> num_authors;
		cout <<"Number of Authors: "<<num_authors<<endl;
		input.ignore();
		for (int j = 0; j < num_authors;j++){
			getline(input, author_name);
			cout<<"Author: "<<author_name<<endl;

		}
	}
	input.close();
	
}





/*********************************************************************
 * ** Function:library_time
 * ** Description:prints out the time of the library operation hours
 * ** Parameters: n/a
 * ** Pre-Conditions: call when the user requests for hours
 * ** Post-Conditions: prints out the time
 * ** Return:n/a
 * *********************************************************************/ 
void library_time(){



	cout <<"This is the library operation hours! "<<endl;
	cout <<"Monday---------------- 2:00 AM to 10:00 PM"<<endl;
	cout <<"Tuesday--------------- 10:00 PM to 11:11 AM"<<endl;
	cout <<"Wednesday------------- 10:00 PM to 10:00 PM"<<endl;
	cout <<"Thursday-------------- 10:00 AM to 11:10 PM "<<endl;
	cout <<"Friday---------------- 12:00 PM to 12:00 AM"<<endl;
	cout <<"Saturday-------------- 10:00 PM to 12:00 AM"<<endl;
	cout <<"Sunday---------------- 10:00 PM to 12:00 AM"<<endl;

}




