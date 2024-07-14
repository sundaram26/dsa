#include <iostream>
#include <cstring>
using namespace std;

class Hero{
    private:
    int health;
    
    public:
    char* name;
    char level;

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
    ~Hero(){
        cout<<"destructor called"<<endl;
    }
};

int main(){

    //static
    Hero a;

    //Dynamic
    Hero* b = new Hero();
    delete b;

    return 0;
}