#include <iostream>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog: public Animal{
    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};

int main(){

    Dog obj;
    obj.speak();    //agar Dog me function nhi likhte to speaking print karta.

    return 0; 
}