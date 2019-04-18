
/**: Life Decision
 ** Author: Jeff Deng
 ** Date: 22 Jan 2017
 ** Description: A text adventure game where it provides the user with 2 choices and based on the decisions the user chooses, it will determine the user's fate.
 ** Input: Numbers of 1 and 2
 ** Output: Different results according to the user's inputs.
 *********************************************************************/


#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

/*********************************************************************
 *  ** Function: stay_in_college
 *   ** Description: It will be called after the user chooses number 1
 *    ** Parameters: int choice;
 *     ** Pre-Conditions: error_handling must be declared as false to use for while loops; variable choice must be declared; while loop existence; if else statement
 *      ** Post-Conditions: user will be able to input values; the game can approach differently depending on the user's choice.
 *       ** Return: none
 *        *********************************************************************/
void stay_in_college(int choice){
    bool error_handling = false;
    
    cout << "\nYou chose to stay in college! Your professors are telling you to purchase textbooks for the classes, are you willing to spend hundreds to buy them?\n Enter 1 to purchase the textbooks; Enter 2 to refuse buying the textbooks: ";
    cin >> choice;
    
    while (!error_handling){
        if (choice == 1){
        
            cout << "\nYou decided to buy the textbooks! After putting tons of hours into studying, you managed to received a 4.0 GPA!!!! What are you planning to do next?\n Enter 1 to celebrate with parties; Enter 2 to keep studying: ";
            cin >> choice;
            
            while (!error_handling){
            
                if (choice == 1){
            
                    cout << "\nYou partied so hard that you got wasted. You ending up messed up your college life and your future... -.-.. Do you want to save it?\n Enter 1 to not save it; Enter 2 to revive yourself: "; //Party Ending
                    cin >> choice;
                    
                    if (choice == 1){
                    
                        cout << "\nBye...." << endl;
                        error_handling = true;
                    } else if ( choice == 2){
                    
                        cout << "\nSike! You can't save yourself no more. Bye" << endl;
                        error_handling = true;
                    }
            
                }//party choice
                else if (choice == 2){
                    cout << "\nYou kept studying and you finally made it! You have graduated from Oregon State University! What are   you planning to do for the next 10 years?\n Enter 1 to just slack off as time goes by; Enter 2 to work hard and stay on top of everything: ";
                    cin >> choice;// Pick a way to end after graduation
                
                    while (!error_handling){
                        if ( choice == 1 ) {
                            cout << "\nYou just spent 10 years of your life doing nothing but sleep and eat... sigh, I am done with you.... bye~" << endl;//Slacking Ending
                            error_handling = true;
                
                        }
                        else if (choice == 2){
                
                            cout << "\nYou chose to work your butt off for the next 10 years. You have earned everything you wished   for. Good Job! I am proud! Everything is set. The End" << endl; //Hard working ending
                            error_handling = true;
                
                        }
                        else {
                
                            cout << "Please enter valid numbers!!! Please!" << endl;
                            cin >> choice;
                            
                        }
                    }//while loop
            
                }
                else {
            
                    cout << "Please enter valid numbers!!! Please!" << endl;
                    cin >> choice;
                    
                    }
                }//while loop for if not celebrating for college
            
            error_handling = true;
        } else if (choice == 2) {
        
            cout << "\nYou chose not to buy textbooks! After all the finals, due to your efforts, you only received a 2.2 GPA. What are you going to do?\n Enter 1 to enjoy the party life; Enter 2 to ask for helps and get your life together once more: ";
            cin >> choice;
            
            while (!error_handling){
                if (choice == 1){
                
                    cout << "\nYou chose to party! You have gotten wasted and you got arrested for underage drinking. You have been screwed! Bye!" << endl;
                    error_handling = true;
                
                }//party decision
                else if (choice == 2){
                
                    cout << "\nYou chose to get yourself together. While asking for helps and keeping yourself busy, you feel it is very difficult to keep trying. What are you going to do?\n Enter 1 to give up; Enter 2 to keep going: ";
                    cin >> choice;
                    while (!error_handling){
                    
                        if (choice == 1){
                        
                            cout << "\nYou chose to give up in life.... Bro! Don't give up in life! The end" << endl;
                            error_handling = true;
                        }
                        else if (choice == 2){
                        
                            cout << "\nYou chose to keep going! Good job buddy! Due to your efforts, you have become successful! I am proud! " << endl;
                            error_handling = true;
                        }
                        else{

                            cout << "Please enter valid numbers!!! Please!" << endl;
                            cin >> choice;
                        }
                    }//while for choices
                
                }
                else {
                    
                    cout << "Please enter valid numbers!!! Please!" << endl;
                    cin >> choice;
                }
            }
            error_handling = true;//for the whole "while" loop that's going.
        }else {
            cout << "Please enter valid numbers!!! Please!" << endl;
            cin >> choice;
            }
    }//error handling for the whole choice

}




/*********************************************************************
 *  ** Function:drop_out
 *   ** Description: It will be called after the user picked number 2
 *    ** Parameters: int choice
 *     ** Pre-Conditions: variable handle_badinput, random_number, and choice must be declared; while loops existence; if else statements.
 *      ** Post-Conditions: user will be able to input values; the game can approach differently depending on the user's choice; random number generator.
 *       ** Return:none
 *        *********************************************************************/
void drop_out(int choice){
    int random_number = rand() % 6 + 1;
    
    bool handle_badinput = false;
    
    cout << "\nYou chose to drop out of college... What are you decisions?\n Enter 1 to find a job; Enter 2 to learn some skills: ";
    cin >> choice;
    
    
    while (!handle_badinput){
    
        if (choice == 1){
            
                cout << "\nYou found yourself a minimum wage job. You know deep inside your soul that you won't be satisfy with it, what are you going to do?\n Enter 1 to risk your assets and roll a dice for rich; Enter 2 to just keep your low wage job: ";
                cin >> choice;
                
                if (choice == 1){
                
                    cout << "\nYou chose to roll a dice of fortune! This dice will determine your fate! Even Number = 150 million dollars as reward; Odd Number = You will lose all your money.\n Enter '\"1'\" to roll your dice of fortune: ";
                    cin >> choice;
                    
                    while (!handle_badinput){
                    
                        if (choice == 1){
                            cout << "\nDice = " << random_number << endl;
                        
                            if (random_number == 0 or random_number == 2 or random_number == 4 or random_number == 6){
                            
                                cout << "\nThe dice has roll an even number! You earned yourself 150 million dollars! You won!" << endl;
                                handle_badinput = true;
                            } else if (random_number == 1 or random_number == 3 or random_number == 5){
                            
                                cout<< "\nSorry, you have lost everything.... Good bye~" << endl;
                                handle_badinput = true;
                            
                            }
                        
                        } else{
                        
                            cout <<"Please enter valid numbers!!! Please!" << endl;
                            cin >> choice;

                        }
                    }
                } else if (choice == 2){
                
                    cout << "\nYou chose to keep your low income job. Are you planning to change that?\n Enter 1 to change your life; Enter 2 to keep it: ";
                    cin >> choice;
                    
                    while (!handle_badinput){
                    
                        if (choice == 1){
                        
                            cout << "\nYou chose to change your life! I am proud, you switched to think of a better job and thinking of success. I am proud. Good luck in life." << endl;
                            handle_badinput = true;
                        } else if (choice == 2){
                        
                            cout << "\nYou chose to keep your low income job. You worked for 30 years and you retired with less than 3000 dollars... The end" << endl;
                            handle_badinput = true;
                        } else{
                        
                            cout << "Please enter valid numbers!!! Please!" << endl;
                            cin >> choice;

                        }
                    }//while loop
                
                }else{
                
                    cout << "Please enter valid numbers!!! Please!" << endl;
                    cin >> choice;
                }
                handle_badinput = true;
        }else if (choice == 2){
        
                cout << "\nYou decided to learn some new skills since you dropped out of college. After a while, you did in fact learned quite some useful skills. What are you gonna do?\n Enter 1 to look for a mid-paying job; Enter 2 to go back to school: ";
                cin >> choice;
                while (!handle_badinput){
                
                    if (choice == 1){
                    
                        cout<< "\nYou decided to look for a mid-paying job. You earned a decent amount of money.\n Enter 1 to keep your job; Enter 2 to work hard to earn more money: ";
                        cin >> choice;
                        while(!handle_badinput){
                        
                            if (choice == 1){
                            
                                cout << "\nYou have decided to keep your job. Keep it up :)... The end" << endl;
                                handle_badinput = true;
                            } else if (choice == 2){
                            
                                cout << "\nYou have decided to work harder for more. Good job bro! Hope you'll be successful!" << endl;
                                handle_badinput = true;
                                
                            } else{
                                cout << "Please enter valid numbers!!! Please!" << endl;
                                cin >> choice;
                            }
                        }//while loop
                    }else if (choice == 2 ){
                    
                        cout <<"\nYou're deciding to head back to college to obtain your education! I am proud hahaha!\n Enter 1 to strike for Ph.D; Enter 2 to just earn a degree: ";
                        cin >> choice;
                        while (!handle_badinput) {
                            if (choice == 1){
                            
                                cout <<"\nYou wanna earn a Ph.D, and you are hella smart now. You've gotten a Nobel Prize. Good job. The end" << endl;
                                handle_badinput = true;
                            } else if (choice == 2){
                            
                                cout << "\nYou're just planning to earn a degree to go for good job. You're salary is not that bad. Keep it up!" << endl;
                                handle_badinput = true;
                            } else {
                                cout << "Please enter valid numbers!!! Please!" << endl;
                                cin >> choice;
                            }
                        }//while loop
                    } else {
                        cout << "Please enter valid numbers!!! Please!" << endl;
                        cin >> choice;
                            }
                    
                }
                handle_badinput = true;
        }else {
        
            cout << "Please enter valid numbers!!! Please!" << endl;
            cin >> choice;
                }
        
    
    }//while loop



}



/*********************************************************************
 *  ** Function: main
 *   ** Description: the beginning of everything
 *    ** Parameters: none
 *     ** Pre-Conditions: variable choice and bad_input must declared; random number generator seeds; if else statement; while loop.
 *      ** Post-Conditions: User can input number 1 or 2 to move on.
 *       ** Return:none
 *        *********************************************************************/

int main(){

    
    int choice;
    bool bad_input = false;
    srand((unsigned int)time(NULL)); //seeds random number generator. do it just once
    
    
    while(!bad_input){
        cout << "Hi! Welcome to the '\"Life Decision'\" !! You have to make a life decision right now. Enter 1 to stay in college or Enter 2 to drop out of college: ";
        cin >> choice;
        cin.ignore();


        while (!bad_input){

            if (choice == 1){
                stay_in_college(choice);
                bad_input = true;
        
        
            } else if ( choice == 2){
                drop_out (choice);
                bad_input = true;
            
        
            } else {
                cout << "Please enter valid numbers!" << endl;
                cin >> choice;
                cin.ignore();
        
            }
        }
    
    
        cout << "\nWould you like to start over? Enter 1 or 2 for quitting: ";
        cin >> choice;
        
        if (choice == 2){
        
            bad_input = true;
            
        } else if ( choice == 1){
        
            cout << "\n";
            bad_input = false;
            
        }
    }
    
    cout << "\nHave a nice day!\n" << endl;
    
    return 0;

}

