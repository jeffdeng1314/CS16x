#pragma once

/*********************************************************************
 * ** Function:hours
 * ** Description:the hours for the library
 * ** Parameters: n/a
 * ** Pre-Conditions:inside the private of the classes
 * ** Post-Conditions:prints out the time
 * ** Return:n/a
 * *********************************************************************/ 
struct hours{
	int begin_time;
	int end_time;
};

/*********************************************************************
 * ** Function:book
 * ** Description: organizing the books
 * ** Parameters: n/a
 * ** Pre-Conditions: private in the classes
 * ** Post-Conditions: work as a library
 * ** Return:n/a
 * *********************************************************************/ 
struct book{

	string title;
	int num_authors;
	string *authors;
	int year;
};
