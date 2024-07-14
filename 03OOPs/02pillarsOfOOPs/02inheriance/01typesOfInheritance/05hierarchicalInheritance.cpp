#include <iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout<<"Inside function 1"<<endl;
    }
};
class B:public A{
    
};
class C:public A{

};
int main(){

    B b;
    b.func1();
    C c;
    c.func1();

    return 0;
}