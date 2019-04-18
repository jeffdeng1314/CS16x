#include "header.h"
#include "creature.h"
#include "world.h"


int purchase_creatures(world &);
void getting_them(int,world &, human *);


/*********************************************************************
 * ** Function:main
 * ** Description:the main function
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
int main(){
	srand(time(NULL));
	world w;
	human* human_access = w.get_human();
	int x = 0;
	
	int  which_one = 0;
	bool loop = true;
	double money = 0;
	while(loop == true){
		cout <<"Hi! Welcome to World of Battle Legends!"<<endl;cout <<endl;
		cout <<"Please select the options to proceed"<<endl;cout<<endl;

		cout <<"(1) Purchase Creatures"<<endl;
		cout <<"(2) Battle!!!!!       "<<endl;
		cout <<"(3) Quit              "<<endl;
		cin >> x;
		
		if(x == 1){
		   cout <<"enter the num for human: ";
		   cin >> x;
		   w.set_num(x);
		   w.set_human();
		   //human* human_access = w.get_human();	
		money = w.get_money() - (x * human_access.get_cost());
		cout <<"money: "<<money<<endl;
		   human_access.set_num_human();	
		   cout <<"\nThe amount of humans: "<<human_access[0].get_num_human<<endl;
		   }



/*
		if (x == 3)
			return 0;
		else if (x == 1){
			which_one = purchase_creatures(w);
			getting_them(which_one,w,human_access);
		}
		else if ( x == 2){
			//battle_function();
		}
		else if ( x >= 4 || x <= 0 || cin.fail()){
			cout <<"Please try again"<<endl;
			cout <<endl;
			cin.clear();
			cin.ignore();
		}

	}
*/

}


/*********************************************************************
 * ** Function:purchase_creatures
 * ** Description:buying creature
 * ** Parameters:world &w
 * ** Pre-Conditions:called from main
 * ** Post-Conditions:return the choice
 * ** Return:num
*********************************************************************/
int purchase_creatures(world &w){
	int num = 0;
	bool x = true;
	while( x == true){
		cout <<"What Do you want to purchase?"<<endl;
		cout <<"Your initial amount is: " <<w.get_money()<<endl;
		cout <<"(1) Humans---------$150"<<endl;
		cout <<"(2) Cyberdemons----$250"<<endl;
		cout <<"(3) Balrogs--------$150"<<endl;
		cout <<"(4) Elves----------$175"<<endl;
		cout <<"(5) Dragons--------$1000"<<endl;
		cin >> num;

		if ( num >= 6 || x <= 0 || cin.fail()){
			cout <<"Please try again"<<endl;
			cin.clear();
			cin.ignore();
		}
		else{
			x = false;
		}
	}
		return num;
}



/*********************************************************************
 * ** Function:getting_them
 * ** Description:getting the amount
 * ** Parameters:which_one,world&w, human_access
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
void getting_them(int which_one,world &w, human *human_access){

	int type = which_one - 1;//to match with the types, cuz 0-4 in index wise, not 1-5
	int num;
	double money = 0;
	cout <<"Enter the amount: "<<endl;
	cin >> num;
	w.set_num(num,type);
	//double initial_money = w.get_money();
	//double human_cost = human_access->get_cost();
	if (type == 0){
		w.set_human();
		//money = (initial_money - (human_cost * num));
		money = w.get_money() - (150 * num);
		w.set_money(money);
		cout <<"Cost: "<<(150 * num)<<endl;
	}
	
	else if (type == 1){
		w.set_cyberdemon();
	}
	else if (type == 2){
		w.set_balrog();

	}
	else if ( type == 3){
		w.set_elf();
	}
	else if (type == 4){

		w.set_dragon();
	}
			

}
