#include <iostream>
using namespace std;

int score = 15; //global variable

void a(int& i){
    cout<<score<<" in a"<<endl;
    cout<<i <<endl;
    // b(i);
}
void b(int& i){
    cout<<i<<endl;
}
int main(){

    int i=5;
    a(i);

    // {
        // int i=2;   //local variable
        // cout<<i<<endl;
    // }

    return 0;
}