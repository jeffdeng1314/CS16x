#pragma once

/*********************************************************************
 * ** Function:patron
 * ** Description:the patron class
 * ** Parameters: none
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:creates an object
 * ** Return:n/a
 * *********************************************************************/ 
class patron{
	public:
		patron();
		void check_out_books (const cart &);
		void check_in_books (const cart &);
		void view_my_books_out ();

	private:
		string name;
		int id;
		int books_checked_out;


};
