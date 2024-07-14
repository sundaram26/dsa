#include <iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout<<"this is function"<<endl;
    }
};
class B: public A{
    public:
    void func2(){
        cout<<"this is function in class b"<<endl;
    }
};
class C{
    public:
    void func3(){
        cout<<"this is function in class c"<<endl;
    }
};
class D: public B, public C{
    
};

int main(){

    D obj;
    obj.func1();
    obj.func2();
    obj.func3();

    return 0;
}