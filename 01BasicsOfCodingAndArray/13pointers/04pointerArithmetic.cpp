#include <iostream>
using namespace std;

int main(){

    int i= 3;
    int *t = &i;
    // cout<< (*t)++ << endl;

    *t = *t +1;
    cout<< *t <<endl;

    cout<<"before t "<<t<<endl;
    t=t+1;
    cout<<"after t "<<t<<endl; //int hai isliye 4 byte aage chala jayega

    return 0;
}