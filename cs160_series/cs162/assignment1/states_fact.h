#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include<cstdlib>

using namespace std;

/*********************************************************************
 * ** Function:county
 * ** Description:variables for county information
 * ** Parameters:none
 * ** Pre-Conditions:N/A
 * ** Post-Conditions:N/A
 * ** Return:N/A
 * *********************************************************************/ 
struct county{
        string name;
        string *city;
        int cities;
        int population;
        float avg_income;
        float avg_house;
};



/*********************************************************************
 *  * ** Function:state
 *   * ** Description:variables for state information
 *    * ** Parameters:none
 *     * ** Pre-Conditions:N/A
 *      * ** Post-Conditions:N/A
 *       * ** Return:N/A
 *        * *********************************************************************/
struct state{
        string name;
        struct county *c;
        int counties;
        int population;
};

bool is_valid_arguments(char*[],int);
void checking_arguments(char*[],int , int &,int&,int&,char[],ifstream & );
void second_main(int, char[]);
void get_state_data(state *, int , ifstream &);
void get_county_data(county *, int , ifstream &);
void largest_population(state*,int,ofstream &,int);
void specific_income(state *, int , ofstream &, int, int);
void average_household(state * , int , ofstream &, int );
void state_population(state * , int , ofstream &, int );
