#include <iostream>
using namespace std;

int main(){

    int a[20] = {1, 2, 3, 5};
    cout<< "address of a: " << &a[0] << endl;
    cout<< &a << endl;
    cout<< a << endl;


    int *p = &a[0];
    cout<< p << endl;
    cout<< *p << endl;
    cout<< "address of pointer: " << &p << endl;

    return 0;
}