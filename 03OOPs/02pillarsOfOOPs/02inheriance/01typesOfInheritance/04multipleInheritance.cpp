#include <iostream>
using namespace std;

class Animal{
    public:
    void walk(){
        cout<<"can walk"<<endl;
    }
};
class Bird{
    public:
    void fly(){
        cout<<"can fly"<<endl;
    }
};
class Human: public Animal, public Bird{

};
int main(){

    Human h;
    h.fly();
    h.walk();

    return 0;
}