#include <iostream>
using namespace std;

class Hero{
    private:
    int health;
    public:
    char level;

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

    //creation of object---static
    Hero ramesh;
    // cout<<"Size of Ramesh is "<<sizeof(ramesh)<<endl;

    //using getter
    // cout<<"Ramesh health is: "<<ramesh.getHealth()<<endl;      //show garbage value.
    //using setter
    ramesh.setHealth(70);
    ramesh.level = 'B';
    cout<<"Ramesh level is: "<<ramesh.level<<endl;
    cout<<"Ramesh Health is: "<<ramesh.getHealth()<<endl;

    //creation of object---Dynamic
    Hero* suresh = new Hero;
    suresh->setLevel('A');
    suresh->setHealth(60);
    //Accessing modifier by dot operator
    cout<<"level is "<<(*suresh).level<<endl;
    cout<<"health is "<<(*suresh).getHealth()<<endl;
    //Accessing by arrow
    cout<<"level is "<< suresh->level<<endl;
    cout<<"health is "<< suresh->getHealth()<<endl;



    return 0;
}