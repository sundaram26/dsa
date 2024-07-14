#include <iostream>
#include <cstring>
using namespace std;

class Hero{
    private:
    int health;
    
    public:
    char* name;
    char level;
    static int timeToComplete;

    Hero(){
        cout << "Simple Constructor called" << endl;
        name = new char[100];
    }

    //Parameterise Constructor
    Hero(int health, char level){
        // cout<<"this->"<<this<<endl;
        this -> level = level;
        this -> health = health;
    }

    //copy constructor
    // Hero(Hero& temp){
    //     cout<<"copy constructor called"<<endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }
    void print(){
        cout<<endl;
        cout<<"[ Name: "<<this->name<<" ,";
        cout<<"level: "<<this->level<<" ,";
        cout<<"health: "<<this->health<<" ]";
        cout<<endl;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health = h; 
    }
    void setLevel(char ch){
        level = ch;
    }
    void setName(char name[]){
        strcpy(this->name, name);
    }
    static int random(){
        return timeToComplete;
    }
    ~Hero(){
        cout<<"destructor called"<<endl;
    }
};

int Hero::timeToComplete = 5;

int main(){

    cout<<Hero::random()<<endl;
    
    
    
    
    
    
    
    
    // cout<< Hero::timeToComplete<<endl;

    // //try to avoid this
    // Hero a;
    // cout<<a.timeToComplete<<endl;

    // Hero b;
    // b.timeToComplete = 10;
    // cout<<a.timeToComplete<<endl;
    // cout<<b.timeToComplete<<endl;


    return 0;
}