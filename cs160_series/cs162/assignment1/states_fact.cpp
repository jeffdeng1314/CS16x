#include "states_fact.h"

/*********************************************************************
 *  * ** Function:is_valid_arguments
 *   * ** Description:check if the command line argument is valid
 *    * ** Parameters:char*m[],int n
 *     * ** Pre-Conditions:called from main function
 *      * ** Post-Conditions:return a true or call other function
 *       * ** Return:true
 *        * *********************************************************************/

bool is_valid_arguments(char*m[], int n){
	int num_states;
	char file[256];
	char *file_pointer = file;
	char first[3] = "-f";
	char second[3] = "-s";
	int num2 = 0, num = 0, i, something = 0, checking_for_return = 0, something2 = 0;
	ifstream file_open;
	
	if(n != 5){
		cout<<"You didn't enter the correct numbers of arguments"<<endl;
		cout<<endl;
		return true;
	}

	for (i = 0;i < 5; i++){
		if(strcmp(first,m[i]) == 0)
			num = i;
		if(strcmp(second,m[i]) ==0)
			num2 = i;
	}
	if(num == 0 or num2 == 0 or num == 4 or num2 == 4){
		cout<<"Please enter the -s or -f in the arguments or too many of these stuff\n"<<endl;
		return true;
	}



	
	for(int j =0; j < strlen(m[num2+1]); j++){
		if(m[num2+1][j] < '0' || m[num2+1][j] > '9'){
			something = something + 1;
			checking_arguments(m,n,num_states,something,something2,file,file_open);
			checking_for_return = checking_for_return + 1;
		}
		else{
			num_states =atoi( m[num2+1]);
			checking_for_return = checking_for_return + 1;
		}
	} 
		
	file_open.open(m[num+1]);
	if(file_open.is_open()){
		strcpy(file_pointer, m[num+1]);
		checking_for_return = checking_for_return + 1;
	}
	else{
		something2 = something2 + 1;
		checking_arguments(m,n,num_states,something,something2,file,file_open);
		checking_for_return = checking_for_return + 1;
	}	

	file_open.close();
	if(checking_for_return == 2){
		second_main(num_states,file);}
}





/*********************************************************************
 * ** Function:Checking_arguments
 * ** Description: this is for error handling during command line argument
 * ** Parameters:char*m[],int n, int &num_states, int &something, int&something2, char file[], ifstream &file_open
 * ** Pre-Conditions:called from bool function
 * ** Post-Conditions:returning a valid value to the bool function
 * ** Return:N/A
 * *********************************************************************/ 
void checking_arguments(char*m[],int n, int &num_states,int &something,int &something2,char file[],ifstream &file_open){
	bool checking = true, checking2 = true;
	if(something == 1){
		while(checking == true){
			cout<<"\nYou are required to input the valid numbers of states"<<endl;
			cout<<"Please enter the number of states: ";
			cin >> num_states;
			if(num_states > 0){
				checking = false;
			}
			else{
				cout<<"Please enter positive number"<<endl;
			}
		}
		cout<<endl;

		something = 0;
	}	
	if(something2 == 1){
		while(checking2 == true){
			cout<<"Please enter the valid name for the file: ";
			cin>>file;
			file_open.open(file);
			if(file_open.is_open())
				checking2 = false;
			else{
				cout<<"Please try again!"<<endl;cout<<endl;
			}
		}
		something2 = 0;

	}
}






/*********************************************************************
 * ** Function:create_states
 * ** Description:create array
 * ** Parameters:int num_states
 * ** Pre-Conditions:called from function
 * ** Post-Conditions:create an array
 * ** Return:x
 * *********************************************************************/ 
state * create_states(int num_states){
	struct state * x = new struct state [num_states];
	return x;

}


/*********************************************************************
 * ** Function:create_counties
 * ** Description: create array
 * ** Parameters:num_counties
 * ** Pre-Conditions:called from function
 * ** Post-Conditions:create an array
 * ** Return:y
 * *********************************************************************/ 
county* create_counties (int num_counties){
	struct county * y = new struct county [num_counties];
	return y;

}



/*********************************************************************
 * ** Function:delete_info
 * ** Description:deleting the array
 * ** Parameters:state_table, num_states
 * ** Pre-Conditions:called from main2 function
 * ** Post-Conditions:deleting the dynamic array
 * ** Return:n/a
 * *********************************************************************/ 
void delete_info(state ** state_table, int num_states){
	for(int i = 0; i < num_states; i++){
		for(int j = 0; j < (*state_table)[i].counties;j++){
			delete[](*state_table)[i].c[j].city;
			}
		delete[](*state_table)[i].c;
	}
	delete [] (*state_table);

}



/*********************************************************************
 * ** Function:second_main
 * ** Description:act as a second main function
 * ** Parameters:num_states, file[]
 * ** Pre-Conditions:called from the bool function
 * ** Post-Conditions:calling other functions like a main function
 * ** Return:N/A
 * *********************************************************************/ 
void second_main(int num_states, char file[]){
	int income_amount = 0;
	int choice = 0;
	bool x = true;
	state* state_table = create_states(num_states);

	ifstream input;
	ofstream output;

	input.open(file);
	output.open("new_file.txt");

	get_state_data(state_table,num_states,input);
	while(x==true){
		cout<<"Do you want the information to be printed on the screen or in a file? (1 = on screen, 2 = on file): ";
		cin>> choice;
		if(choice ==1 || choice == 2)
			x = false;
		else
			cout<<"Enter 1 or 2!!!"<<endl;
	}

	x = true;
	while(x == true){

		cout<<"Please enter the specific amount of income to sort out the counties: ";
		cin >> income_amount;

		if(income_amount > 0)
			x = false;
		else
			cout<<"Please try again!"<<endl;
	}

	largest_population(state_table, choice,output,num_states);	
	specific_income(state_table,choice, output, num_states,income_amount);
	average_household(state_table, choice, output, num_states);

	delete_info(&state_table,num_states);


	input.close();
	output.close();	
}










/*********************************************************************
 * ** Function: average_household
 * ** Description:a function that displays the average household income for all the counties in a state
 * ** Parameters:num_states, state_table,choice,output
 * ** Pre-Conditions:Must be called from main 2, and all the variables must be created and initialized
 * ** Post-Conditions:display the average household per state
 * ** Return:N/A
 * *********************************************************************/ 
void average_household(state * state_table, int choice, ofstream &output, int num_states){

	float x;
	float avg;
	float array[50];

	if(choice == 1){
		cout<<endl;
		cout<<"Average household income per state: "<<endl;
	}
	if(choice == 2){
		output <<endl;
		output<<"Average household income per state: "<<endl;

	}
	for(int i = 0; i < num_states; i ++){
		x = 0;
		avg = 0;
		for(int j = 0; j < state_table[i].counties; j++){
			x = x + state_table[i].c[j].avg_house;				

		}
		avg = (x/2);

		array[i] = avg;

		if(choice == 1){
			cout<<state_table[i].name << "-----"<<array[i]<<endl;
		}
		if(choice == 2){
			output<<state_table[i].name << "-----"<<array[i]<<endl;
		}



	}


}







/*********************************************************************
 * ** Function:specific_income
 * ** Description:sorting the specific income input by the user
 * ** Parameters:state_table, choice, &output, num_states, income_amount
 * ** Pre-Conditions:called from main 2 function
 * ** Post-Conditions:sorting out the incomes
 * ** Return:N/A
 * *********************************************************************/ 
void specific_income(state * state_table, int choice, ofstream &output, int num_states, int income_amount){

	int x = 0;

	if(choice == 1)
		cout<<"\nCounties with specific income: "<<endl;
	if(choice == 2)
		output <<"\nCounties with specific income: "<<endl;

	for(int i =0; i < num_states;i++){

		for(int j = 0; j < state_table[i].counties; j++){

			if(state_table[i].c[j].avg_income > float(income_amount)){
				if(choice == 1){
					cout<<endl;
					cout<<"County: "<<state_table[i].c[j].name<<"    |    Income: "<<state_table[i].c[j].avg_income<<endl;
				}
				if(choice == 2){
					output<<endl;
					output<<"County: "<<state_table[i].c[j].name<<"    |    Income: "<<state_table[i].c[j].avg_income<<endl;
				}

			}

		}
	}

}





/*********************************************************************
 * ** Function:largest_population
 * ** Description:sorting out the largest population between both states and counties
 * ** Parameters:state_table, choice, output, num_state
 * ** Pre-Conditions:called from the main function
 * ** Post-Conditions:printing out the population
 * ** Return:n/a
 * *********************************************************************/ 
void largest_population(state* state_table, int choice, ofstream &output,int num_states){
	int x = 0;
	int y =0;
	int j;
	int county_check = 0;
	int state_check = 0;
	int num_counties = 0;
	for(int i = 0; i < num_states; i++){

		num_counties = num_counties + state_table[i].counties;
		if(state_table[i].population > x){
			x = state_table[i].population;
			state_check = i;
		}

		for(j =0; j < state_table[i].counties; j++){//loop for county
			if(state_table[i].c[j].population > y){
				y = state_table[i].c[j].population;
				county_check = j;
			}

		}

	}
	cout<<endl;
	if(choice == 1){
		cout<<"The state with the largest population: "<<state_table[state_check].name<<" with the population of "<<x<<endl;
		cout<<"The county with the largest population: "<<state_table[state_check].c[county_check].name<<" with the population of "<<y<<endl;
	}	
	else if(choice == 2){
		output <<"The state with the largest population: "<<state_table[state_check].name<<" with the population of "<<x<<endl;
		output << "The county with the largest population: "<<state_table[state_check].c[county_check].name<<" with the population of "<<y<<endl;
	}

}



/*********************************************************************
 * ** Function:get_state_data
 * ** Description:getting the state data
 * ** Parameters:state_table, num_states,input
 * ** Pre-Conditions:called from a function
 * ** Post-Conditions:gets the data
 * ** Return:n/a
 * *********************************************************************/ 
void get_state_data(state *state_table, int num_states, ifstream &input){

	for(int i =0; i < num_states; i++){
		input >> state_table[i].name;
		input >> state_table[i].population;
		input >> state_table[i].counties;

		state_table[i].c = create_counties(state_table[i].counties);
		for(int j =0; j < state_table[i].counties;j++){	
			get_county_data(state_table[i].c,j,input);
			cout<<endl;
		}	
	}
}


/*********************************************************************
 * ** Function:get_county_data
 * ** Description:getting the county data
 * ** Parameters: county_table, j , input
 * ** Pre-Conditions:called from the function
 * ** Post-Conditions:getting data from the counties
 * ** Return:n/a
 * *********************************************************************/ 
void get_county_data(county * county_table, int j, ifstream &input){
	input >> county_table[j].name;
	input >> county_table[j].population;
	input >> county_table[j].avg_income;
	input >> county_table[j].avg_house;
	input >> county_table[j].cities;
	county_table[j].city = new string[county_table[j].cities];
	for(int i =0; i < county_table[j].cities;i++)
		input >> county_table[j].city[i];


}
