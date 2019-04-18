#include <iostream>
void labs_average(unsigned int, unsigned int, unsigned int, float);
void labs_calculation(unsigned int, unsigned int, unsigned int, float);
void assignment_calculation(unsigned int, unsigned int, unsigned int, float);
void assignment_average(unsigned int, unsigned int, unsigned int, float);
void recitation_average(unsigned int, unsigned int, unsigned int, float);
float recitation_quiz(int,unsigned int, unsigned int, unsigned int, float);
float reciation_quiz_average_vary(int, unsigned int ,unsigned int,float );
float reciation_quiz_average_no_vary(int, unsigned int ,unsigned int,float );
float recitation_designs(int,unsigned int,unsigned int,unsigned int,float);
float recitation_design_average_no_vary(int,unsigned int,unsigned int, float);
float recitation_design_average_vary(int,unsigned int,unsigned int, float);
float recitation_critique(int,unsigned int,unsigned int,unsigned int,float);
float recitation_Nvary_critique_average_no_vary(int,unsigned int,unsigned int, float);
float recitation_vary_critique_average_vary(int,unsigned int,unsigned int, float);
void recitation_total_average(int,int,int,float,float,float);

using namespace std;
int main(){
    
    unsigned int user_input, number_Of_Stuff, point_Vary, out_Of_How_Many;
    float score_average;
    
    bool valid_input = false;
    
    while(!valid_input){
        cout << "Would you like to calculate an average for 1) labs, 2) assignments, 3) recitations, 4) tests, 5) the class, or 0) to quit? ";
        cin >> user_input;
        
        if (user_input == 1){
            labs_average(number_Of_Stuff,point_Vary,out_Of_How_Many,score_average);
        }
        else if (user_input == 2){
            assignment_average(number_Of_Stuff,point_Vary,out_Of_How_Many,score_average);
        }
        else if (user_input == 3){
            recitation_average(number_Of_Stuff,point_Vary,out_Of_How_Many,score_average);
        }
        /* else if (user_input == 4){
 *          testss_average(number_Of_Stuff,point_Vary,out_Of_How_Many,score_average);
 *                   }
 *                            else if (user_input == 5){
 *                                     class_grade(number_Of_Stuff,point_Vary,out_Of_How_Many,score_average);
 *                                              }*/
        else if (user_input == 0){
            valid_input = true;
        }
        else{
            cout<<"\nPlease try again!"<<endl;
        }
    }//while loop
    cout << "\nHave a nice day!";
    return 0;
}


void labs_average(unsigned int number, unsigned int vary, unsigned int out_of, float average){

    cout <<"\nHow many labs? ";
    cin >> number;
    
    cout <<"\nDo the point values vary (0-no, any number-yes): ";
    cin >> vary;
    
    if (vary == 0){
        cout <<"\nOut of how many points? ";
        cin >> out_of;
        
        labs_calculation(number, vary, out_of, average);
    }
    else{
    labs_calculation(number, vary, out_of, average);
    }

}

void labs_calculation(unsigned int number,unsigned int vary, unsigned int out_of,float average){
    unsigned int points;
    float score,score_average = 0,points_average=0;
    int i = 1;
   
    if (vary == 0){
        do{
        
            cout <<"Lab " << i << " score: ";
            cin >> score;
            score_average += score;
            i++;

            
        }while(i <= number);
        points_average = out_of * number;
        average = ((score_average/points_average)*100);
        cout << "\nYour lab average is: " <<average<<endl;
    }

    else{
        do{
            
            cout <<"Lab " << i << " score: ";
            cin >> score;
            cout <<"Lab " << i << " points: ";
            cin >> points;
            score_average += score;
            points_average += points;
            i++;
            
        }while(i <= number);
        average = ((score_average/points_average)*100);
        cout << "\nYour lab average is: " <<average <<endl;

    }
}

void assignment_average(unsigned int number, unsigned int vary, unsigned int out_of, float average){

    cout <<"\nHow many assignemnts? ";
    cin >> number;
    
    cout <<"\nDo the point values vary (0-no, any number-yes): ";
    cin >> vary;
    
    if (vary == 0){
        cout <<"\nOut of how many points? ";
        cin >> out_of;
        
        assignment_calculation(number, vary, out_of, average);
    }
    else{
        assignment_calculation(number, vary, out_of, average);
    }

}

void assignment_calculation(unsigned int number, unsigned int vary, unsigned int out_of, float average){
    unsigned int points;
    float score,score_average = 0,points_average = 0;
    int i = 1;
    
    if (vary == 0){
        do{
            
            cout <<"Assignment " << i << " score: ";
            cin >> score;
            score_average += score;
            i++;
            
            
        }while(i <= number);
        points_average = out_of * number;
        average = ((score_average/points_average)*100);
        cout << "\nYour Assignment average is: " <<average<<endl;
    }
    
    else{
        do{
            
            cout <<"Assignment " << i << " score: ";
            cin >> score;
            cout <<"Assignment " << i << " points: ";
            cin >> points;
            score_average += score;
            points_average += points;
            i++;
            
        }while(i <= number);
        average = ((score_average/points_average)*100);
        cout << "\nYour assignment average is: " <<average <<endl;
        
    }

}

void recitation_average(unsigned int number, unsigned int vary, unsigned int out_of, float average){

    bool valid_input = false;
    float quiz_average = 0,design_average = 0,critique_average = 0;
    int quiz_w=0,design_w=0,critique_w=0;
    
    while(!valid_input){
        cout <<"\nQuizz weight:";
        cin >> quiz_w;
        cout <<"\nDesign weight:";
        cin >> design_w;
        cout <<"\nCritique weight: ";
        cin >> critique_w;
        
        if (quiz_w < 0 || design_w < 0 || critique_w < 0){
            cout <<"\nPlease try again"<<endl;
        } else{
        
            valid_input = true;
        
        }
    }//while
    if (quiz_w != 0){
        quiz_average = recitation_quiz(quiz_w,number,vary,out_of,average);
        cout <<"\nYour quiz average is: " << quiz_average<<endl;
    }
    if (design_w != 0){
        design_average = recitation_designs(design_w,number,vary,out_of,average);
        cout <<"Your design average is: " <<design_average<<endl;
    }
    if (critique_w != 0){
        critique_average = recitation_critique(critique_w,number,vary,out_of,average);
        cout<<"Your critique average is: " << critique_average <<endl;
    }
    
    recitation_total_average(quiz_w,design_w,critique_w,quiz_average,design_average,critique_average);
}


float recitation_quiz(int quiz_w,unsigned int number, unsigned int vary, unsigned int out_of, float average){

    if (quiz_w != 0){
    
        cout <<"\nHow many quizzes? ";
        cin >> number;
        
        cout <<"\nDo the point values vary (0-no, any number-yes): ";
        cin >> vary;
        
        if (vary == 0){
        
            cout <<"\nOut of how many points? ";
            cin >> out_of;
            float quizAverage = reciation_quiz_average_no_vary(quiz_w,out_of,number,average);
            return quizAverage;
        }else{
        
            float quizAverage = reciation_quiz_average_vary(quiz_w,out_of,number,average);
            return quizAverage;

        }

    
    }
    else{
        cout<<""<<endl;
    
    }

    return 0;
}

float reciation_quiz_average_no_vary(int quiz_w,unsigned int out_of,unsigned int number,float average){

    float score,score_average = 0,points_average = 0;
    int i = 1;
    
    do{
        
        cout <<"Quiz " << i << " score: ";
        cin >> score;
        score_average += score;
        i++;
        
        
    }while(i <= number);
    points_average = out_of * number;
    average = ((score_average/points_average)*100);
    float quiz_score_average = average;
    return quiz_score_average;
}




float recitation_quiz_average_vary(int quiz_w,unsigned int out_of,unsigned int number,float average){
    unsigned int points;
    float score,score_average = 0,points_average = 0;
    int i = 1;
    
    do{
        
        cout <<"quiz " << i << " score: ";
        cin >> score;
        cout <<"quiz " << i << " points: ";
        cin >> points;
        score_average += score;
        points_average += points;
        i++;
        
    }while(i <= number);
    average = ((score_average/points_average)*100);
    float quiz_score_average = average;
    return quiz_score_average;
}

float recitation_designs(int design_w,unsigned int number, unsigned int vary, unsigned int out_of, float average){

    if (design_w != 0){
        
        cout <<"\nHow many quizzes? ";
        cin >> number;
        
        cout <<"\nDo the point values vary (0-no, any number-yes): ";
        cin >> vary;
        
        if (vary == 0){
            
            cout <<"\nOut of how many points? ";
            cin >> out_of;
            float designAverage = recitation_design_average_no_vary(design_w,out_of,number,average);
            return designAverage;
        }else{
            
            float designAverage = recitation_design_average_vary(design_w,out_of,number,average);
            return designAverage;
            
        }
        
        
    }
    else{
        return 0;
        
    }
    
    return 0;

}

float reciation_design_average_no_vary(int design_w,unsigned int out_of,unsigned int number,float average){
    
    float score,score_average = 0,points_average = 0;
    int i = 1;
    
    do{
        
        cout <<"design " << i << " score: ";
        cin >> score;
        score_average += score;
        i++;
        
        
    }while(i <= number);
    points_average = out_of * number;
    average = ((score_average/points_average)*100);
    float design_score_average = average;
    return design_score_average;
}




float reciation_design_average_vary(int design_w,unsigned int out_of,unsigned int number,float average){
    unsigned int points;
    float score,score_average = 0,points_average = 0;
    int i = 1;
    
    do{
        
        cout <<"design " << i << " score: ";
        cin >> score;
        cout <<"design " << i << " points: ";
        cin >> points;
        score_average += score;
        points_average += points;
        i++;
        
    }while(i <= number);
    average = ((score_average/points_average)*100);
    float design_score_average = average;
    return design_score_average;
}

float recitation_critique(int critique_w,unsigned int number, unsigned int vary, unsigned int out_of, float average){
    
    if (critique_w != 0){
        
        cout <<"\nHow many critiques? ";
        cin >> number;
        
        cout <<"\nDo the point values vary (0-no, any number-yes): ";
        cin >> vary;
        
        if (vary == 0){
            
            cout <<"\nOut of how many points? ";
            cin >> out_of;
            float critiqueAverage = recitation_Nvary_critique_average_no_vary(critique_w,out_of,number,average);
            return critiqueAverage;
        }else{
            
            float designAverage = recitation_vary_critique_average_vary(critique_w,out_of,number,average);
            return designAverage;
            
        }
        
        
    }
    else{
        return 0;
        
    }
    
    return 0;
    
}

float reciation_critique_average_no_vary(int critique_w,unsigned int out_of,unsigned int number,float average){
    
    float score,score_average = 0,points_average = 0;
    int i = 1;
    
    do{
        
        cout <<"critique " << i << " score: ";
        cin >> score;
        score_average += score;
        i++;
        
        
    }while(i <= number);
    points_average = out_of * number;
    average = ((score_average/points_average)*100);
    float critique_score_average = average;
    return critique_score_average;
}




float reciation_critique_average_vary(int critique_w,unsigned int out_of,unsigned int number,float average){
    unsigned int points;
    float score,score_average = 0,points_average = 0;
    int i = 1;
    
    do{
        
        cout <<"critique " << i << " score: ";
        cin >> score;
        cout <<"critique " << i << " points: ";
        cin >> points;
        score_average += score;
        points_average += points;
        i++;
        
    }while(i <= number);
    average = ((score_average/points_average)*100);
    float critique_score_average = average;
    return critique_score_average;
}

void recitation_total_average(int quiz_w,int design_w,int critique_w,float quiz_average,float design_average,float critique_average){

    float x = 0;
    
    x = ((quiz_w * (quiz_average/100))+ (design_w * (design_average/100)) + (critique_w * (critique_average/100))) * 100;
    cout <<"\nYour recitation average is: " << x << endl;


}



