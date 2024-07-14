#include <iostream>
using namespace std;

int main(){
    // int *p; // pointer to int is created, and pointing to some garbage address(don't use this)

    // int *p = 0;

    // cout << *p << endl;

    int i=5;
    int *p = 0;
    p = &i;
    cout<< p << endl;
    cout<<*p<< endl;


    return 0;
}