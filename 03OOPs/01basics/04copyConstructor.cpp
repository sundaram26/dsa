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
    
};
int main(){

    Hero ramesh(70, 'C');
    ramesh.print();

    //copy constructor
    Hero R(ramesh);
    R.print();

    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);

    hero1.print();



//default copy constructor
    Hero hero2(hero1);
    // Hero hero2 = hero1;
    hero2.print();

    hero1.name[0] = 'G';
    hero1.print();

    hero2.print();

    return 0;
}