#pragma once
/*********************************************************************
 * ** Function:librarian
 * ** Description: a librarian class
 * ** Parameters: n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:creates a librarian object
 * ** Return:n/a
 * *********************************************************************/ 
class librarian{

	private:
		string name;
		int id;

	public:
		librarian();
		//~librarian();
		void change_library_hours ();
		void add_new_books (const cart &);
		void remove_old_books();
		void view_all_books_checked_out();
		void view_specific_book_checked_out(string);



};
