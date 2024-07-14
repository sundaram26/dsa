#include <iostream>
using namespace std;

int main(){

    int num = 5;
    int a= 5;
    cout<< "num before "<<num<<endl;
    a++;
    cout<< "num after" <<num<<endl;

    int *p = &num;
    cout<< "before "<< num <<endl;
    (*p)++;
    cout<<"after "<<num<<endl;


    //copying the pointer
    int *q = p;
    cout<< p<<" - "<<q<<endl;
    cout<< *p<<" - "<<*q<<endl;

    return 0;
}