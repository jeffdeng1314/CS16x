#pragma once
#include "structs.h"
/*********************************************************************
 * ** Function:cart
 * ** Description: the cart class
 * ** Parameters: n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions: creates a cart object
 * ** Return:n/a
 * *********************************************************************/ 
class cart{
	private:
		book *books;
		int num_books;
		void resize_books(int);

	public:
		//you need constructors, accessors, mutators
		cart();
		~cart();
		void operator= (const cart &);
		cart (const cart &other);
		void add_to_cart (const book &);
		void display_books();
		void empty_cart();
};





