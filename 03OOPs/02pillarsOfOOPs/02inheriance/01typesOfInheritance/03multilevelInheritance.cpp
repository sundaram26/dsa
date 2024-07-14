#include <iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;
    
    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }
};
class Dog: public Animal{
    public:
    void bark(){
        cout<<"can bark"<<endl;
    }
};
class GermanShepher: public Dog{

};

int main(){

    GermanShepher g;
    g.bark();
    g.speak();
    cout<<g.age<<endl;

    return 0;
}