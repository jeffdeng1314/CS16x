#include <iostream>
#include <string>

using namespace std;

struct monster{
    
    int type;
    int hitpoint;
    int strength;
    string name;
    double cost;
};

class creature{
protected:
    monster *monsters;
    string getSpecies();
    
public:
    creature();

    void set_monster(int,int,int,string,double);
};


#ifdef DEBUG
creature::creature(){
monsters->type = 0;
    monsters->hitpoint = 10;
    monsters->strength = 10;
    monsters = new struct monster [4];
}

#endif

string creature::getSpecies(){
    switch(monsters->type){
        case 0:
            return "Human";
        case 1:
            return "dragon";
        case 2:
            return "demon";
    }
    return "Unknown";
    
}

void creature::set_monster(int type,int strength,int hitpoint,string name,double cost){
    
    this->monsters->type = type;
    this->monsters->strength = strength;
    this->monsters->hitpoint = hitpoint;
    this->monsters->name = name;
    this->monsters->cost = cost;
    
}

class human:public creature{
    
public:
    void set_monster1();
    string type();
    
    
};


string human::type(){
    
    string name;
    name = getSpecies();
    return getSpecies();
    
}

void human::set_monster1(){
    int type = 0;
    int strength = 100;
    int hitpoint = 1000;
    string name = "josh";
    double cost = 100;
    
    set_monster(type,strength,hitpoint,name,cost);
}


int main(){
   creature c1;    
    human h1;
    
    cout <<h1.type()<<endl;
    
}
