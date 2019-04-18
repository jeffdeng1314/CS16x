#pragma once

#include "header.h"
#include "cart.h"
#include "librarian.h"
#include "library.h"
#include "structs.h"
#include "patron.h"


/*********************************************************************
 * ** Function:cart
 * ** Description:a cart constructor
 * ** Parameters: n/a
 * ** Pre-Conditions:an object must be created first
 * ** Post-Conditions:set the variables to default
 * ** Return:n/a
**********************************************************************/
cart::cart(){
	books = NULL;
	num_books = 0;

}

/*********************************************************************
 * ** Function:cart(const cart &other)
 * ** Description:cart copy constructor
 * ** Parameters: cart &other
 * ** Pre-Conditions:called in public
 * ** Post-Conditions:copy the constructor from the original to another
 * ** Return:n/a
 * *********************************************************************/ 
cart::cart(const cart &other){//copy constructor

	
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
 * ** Description:the assignment operator overload for the cart
 * ** Parameters: cart &other
 * ** Pre-Conditions: in the public class
 * ** Post-Conditions: works like a copy constructor, but just that delete things first and then copy
 * ** Return:n/a
 * *********************************************************************/ 
void cart:: operator=(const cart &other){

	if (num_books == 0){
		books = NULL;

	}
	else{
		for(int i = 0; i < num_books; i ++){
			delete [] books[i].authors;
		}	
		delete [] books;
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
 * ** Function:~cart
 * ** Description: a cart destructor
 * ** Parameters: n/a
 * ** Pre-Conditions:call in the public
 * ** Post-Conditions:frees the dynamic memeory that was created in the constructor
 * ** Return:n/a
 * *********************************************************************/ 
cart::~cart(){//destructor
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
