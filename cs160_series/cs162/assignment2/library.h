#pragma once

#include "header.h"
#include "cart.h"
#include "librarian.h"
#include "library.h"
#include "structs.h"
#include "patron.h"

/*********************************************************************
 * ** Function:library
 * ** Description:library class
 * ** Parameters: n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:creates a library object for both the patron and librarian to use
 * ** Return:n/a
 * *********************************************************************/ 
class library{

	private:
		hours week[7];
		int num_books;
		book *books;
		cart c;
		librarian l;
		patron p;

	public:
		library();
		~library();
		void set_books(string,int,int,int);
		book* get_books();
		void set_books_authors(string,int,int);
		void operator= (const library &);
		library(const library &);
		hours* get_time();
		void display_daily_hours (string);
		void display_weekly_hours ();




};
