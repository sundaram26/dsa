#include <iostream>
using namespace std;

class Hero{
    private:
    int health;
    public:
    char level;

    Hero(){
        cout << "Constructor called" << endl;
    }

    //Parameterise Constructor
    Hero(int health, char level){
        // cout<<"this->"<<this<<endl;
        this -> level = level;
        this -> health = health;
    }
    void print(){
        cout<<level<<endl;
        cout<<health<<endl;
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
};
int main(){

    //object created statically
    Hero ramesh();     //constructor called---ramesh.Hero()
    cout<<"Address of ramesh"<<&ramesh<<endl;

    //parameterised constructor.
    Hero paraConstructor(10, 'A');
    paraConstructor.print();

    //dynamically
    Hero* h = new Hero;    //constructor ---h.Hero()

    
    return 0;
}