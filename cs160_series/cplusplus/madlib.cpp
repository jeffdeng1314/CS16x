#include <iostream>
#include <ctime>
#include <cstdlib>
#include<cstring>
using namespace std;



void words_from_file(char noun[][30],char verb[][30],char adjective[][30],char words[],int &verb_num,int &adj_num,int &noun_num){
	for(int i =0; i < 75; i++){
		cin >> words;
		if(words[0] == 'n'){	
			cin >> words;
			strcpy(noun[noun_num],words);
			noun_num = noun_num + 1;	
		}
		
		if(words[0] == 'v'){	
			cin >> words;
			strcpy(verb[verb_num],words);
			verb_num = verb_num + 1;	
		}
		
		if(words[0] == 'a'){	
			cin >> words;
			strcpy(adjective[adj_num],words);
			adj_num = adj_num + 1;	
		}
		
		
	}
}

char *verb_ing(char verb[][30], int verb_num){
	char verbing[verb_num];
	for(int i =0;i<verb_num;i++){
		if(verb[i][strlen(verb[i])]=='g' and verb[i][strlen(verb[i])-1]=='n' and verb[i][strlen(verb[i])-2]=='i'){
			strcpy(verbing[i],verb[i]);
	}
	return verbing;
}


void story1(char noun[][30],char verb[][30],char adjective[][30],char words[],int verb_num,int adj_num, int noun_num){
	char *verbing;
	verbing = verb_ing(verb,verb_num);

	cout<<"Most doctors agree that bicycle "<<verb[rand()%verb_num]<<" is a/an "<<adjective[rand()%adj_num]<<" form of exercise. "<<verbing[rand()%strlen(verbing)] <<" a bicycle enables you to develop your "<< noun[rand()%noun_num] << " muscles, as well as increase the rate of your "<<noun[rand()%noun_num] <<" beat. More "<<noun[rand()%noun_num] <<" around the world "<<verb[rand()%verb_num] <<" bicycles than drive "<< noun[rand()%noun_num] <<". No matter what kind of "<<noun[rand()%noun_num] << " you "<<verb[rand()%verb_num]<<", always be sure to wear a/an "<<adjective[rand()%adj_num]<<" helmet. Make sure to have "<<adjective[rand()%adj_num] <<" reflectors too!"<<endl;
cout<<'\n';
}

void story2(char noun[][30],char verb[][30],char adjective[][30],char words[],int verb_num,int adj_num, int noun_num){
	cout<<"Yesterday, "<<noun[rand()%noun_num] <<" and I went to the park. On our way to the "<<adjective[rand()%adj_num]<<" park, we saw a "<< adjective[rand()%adj_num]<<" "<<noun[rand()%noun_num]<<" on a bike. We also saw big "<<adjective[rand()%adj_num]<<" balloons tied to a "<<noun[rand()%noun_num]<<". Once we got to the "<<adjective[rand()%adj_num]<<" park, the sky turned "<<adjective[rand()%adj_num]<<". It started to "<<verb[rand()%verb_num]<<" and "<<verb[rand()%verb_num]<<". "<<noun[rand()%noun_num] <<" and I "<<verb[rand()%verb_num] <<" all the way home. Tomorrow we will try to go to the " <<adjective[rand()%adj_num]<<" park again and hope it doesn't "<<verb[rand()%verb_num]<<endl;

	cout<<'\n';

}


void story3(char noun[][30],char verb[][30],char adjective[][30],char words[],int verb_num,int adj_num, int noun_num){
	cout<<"Spring break 2017, oh how I have been waiting for you! Spring break is when you go to some "<<adjective[rand()%adj_num]<<" place to spend time with "<<noun[rand()%noun_num]<<". Getting to "<<noun[rand()%noun_num]<<" is going to take "<<adjective[rand()%adj_num]<<" hours. My favorite part of spring break is "<<verb[rand()%verb_num]<<" in the "<<noun[rand()%noun_num]<<". During spring break, "<<noun[rand()%noun_num]<<" and I plan to "<<verb[rand()%verb_num]<<" all the way to "<<noun[rand()%noun_num]<<". After spring break, I will be ready to return to "<<noun[rand()%noun_num]<<" and "<<verb[rand()%verb_num]<<" hard to finish "<<noun[rand()%noun_num]<<". Thanks spring break 2017!"<<endl;
cout<<'\n';

}



int main(int argc, char * argv[]){
	srand(time(NULL));
	int verb_num = 0, adj_num = 0, noun_num= 0;
	char noun[25][30];
	char verb[25][30];
	char adjective[25][30];
	char words[31];
	words_from_file(noun,verb,adjective,words,verb_num,adj_num,noun_num);
	cout<<endl;
	if(argv[1][0] == '1' and strlen(argv[1]) < 2 )
		story1(noun,verb,adjective,words,verb_num,adj_num,noun_num);
	else if(argv[1][0] == '2' and strlen(argv[1]) < 2)
		story2(noun,verb,adjective,words,verb_num,adj_num,noun_num);
	else if(argv[1][0] =='3' and strlen(argv[1]) < 2)
		story3(noun,verb,adjective,words,verb_num,adj_num,noun_num);
	else{
		cout <<"Wrong input, please try again to input correctly!"<<endl;
		return 0;

	}

return 0;
}
