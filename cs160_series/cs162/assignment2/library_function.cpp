#pragma once

#include "header.h"
#include "cart.h"
#include "librarian.h"
#include "library.h"
#include "structs.h"
#include "patron.h"

/*
book * get_books(){
	return &books;

}
*/
/*

void library::set_books(string name, int num_authors, int year, int i){
			
cout<<"in side the set book"<<endl;
		books[i]->title = name;
		cout<<"setbook 2"<<endl;
		books[i].year = year;
		books[i].num_authors = num_authors;
}


void library::set_books_authors(string authors,int i, int j){
cout<<"set_books authors"<<endl;
		books[i].authors[j] = authors;
	
}

void reading_database(library &lib){
cout<<"inside reading database"<<endl;
	ifstream input;
	input.open("books_database.txt");
	string name, authors;
	int year = 0;
	int num_authors = 0;
	for(int i = 0; i < 7; i++){
		getline(input, name);
		input >> year;
		input >> num_authors;
		lib.set_books(name,num_authors,year,i);
		cout<<"before the second loop"<<endl;
		for(int j = 0; j <num_authors;j++){
			getline(input, authors);	
			cout<<"authors loop"<<endl;
			lib.set_books_authors(authors,i,j);
		}	
	

	}
	cout<<"Reading database of book completed"<<endl;
	input.close();
}
*///use it for later




/*********************************************************************
 * ** Function:get_time()
 * ** Description:The Accessor for accessing the time
 * ** Parameters: n/a
 * ** Pre-Conditions:in class public
 * ** Post-Conditions:return the address of week[0]
 * ** Return:address of week[0]
 * *********************************************************************/ 
hours* library::get_time(){

	return &week[0];

}




/*********************************************************************
 * ** Function:library
 * ** Description:a library constructor
 * ** Parameters: n/a
 * ** Pre-Conditions:an object must be created first
 * ** Post-Conditions:set the variables to default
 * ** Return:n/a
 * *********************************************************************/ 
library::library(){
	for(int i = 0; i < 7; i ++){
		week[i].begin_time = 600 ;
		week[i].end_time = 1200;

	}
		num_books = 0;
		books = NULL;
}



/*********************************************************************
 * ** Function:library(const library &other)
 * ** Description:library copy constructor
 * ** Parameters: library &other
 * ** Pre-Conditions:called in public
 * ** Post-Conditions:copy the constructor from the original to another
 * ** Return:n/a
 * *********************************************************************/ 
library::library(const library &other){//copy constructor


	for (int i = 0; i < 7; i ++){
		week[i].begin_time = other.week[i].begin_time;
		week[i].end_time = other.week[i].end_time;
	}
	
	num_books = other.num_books;

	if(num_books = 0){
		books = NULL;	
	}
	else{
		books = new struct book[num_books];
		for (int i = 0; i < num_books; i++){

			books[i].num_authors = other.books[i].num_authors; 
			books[i].authors = new string [books[i].num_authors];
			for(int j =0; j < books[i].num_authors; j++){

				books[i].authors[j] = other.books[i].authors[j];
			}

		}

	}
}


/*********************************************************************
 * ** Function:operator
 * ** Description:the assignment operator overload for the library
 * ** Parameters: library &other
 * ** Pre-Conditions: in the public class
 * ** Post-Conditions: works like a copy constructor, but just that delete things first and then copy
 * ** Return:n/a
 * *********************************************************************/ 
void library:: operator=(const library &other){

	if (num_books == 0){
		books = NULL;

	}
	else{
		for(int i = 0; i < num_books; i ++){
			delete [] books[i].authors;
		}	
		delete [] books;
	}
	cout<<"Inside the library operator"<<endl;



	for (int i = 0; i < 7; i ++){
		week[i].begin_time = other.week[i].begin_time;
		week[i].end_time = other.week[i].end_time;
	}
	
	num_books = other.num_books;

	if(num_books = 0){
		books = NULL;	
	}
	else{
		books = new struct book[num_books];
		for (int i = 0; i < num_books; i++){

			books[i].num_authors = other.books[i].num_authors; 
			books[i].authors = new string [books[i].num_authors];
			for(int j =0; j < books[i].num_authors; j++){

				books[i].authors[j] = other.books[i].authors[j];
			}

		}

	}
}













/*********************************************************************
 * ** Function:~library
 * ** Description: a library destructor
 * ** Parameters: n/a
 * ** Pre-Conditions:call in the public
 * ** Post-Conditions:frees the dynamic memeory that was created in the constructor
 * ** Return:n/a
 * *********************************************************************/ 
library::~library(){//destructor
	if (num_books == 0){
		books = NULL;

	}
	else{
		for(int i = 0; i < num_books; i ++){
			delete [] books[i].authors;
		}	
		delete [] books;
	}
}



