#include <iostream>
using namespace std;

int main(){

    char ch = 'q';
    cout<< sizeof(ch)<<endl;

    char* c= &ch;
    cout<<sizeof(c)<<endl;   //32-bit me output 4 aayega agar 64-bit me output 8 aayega.

    return 0;
}