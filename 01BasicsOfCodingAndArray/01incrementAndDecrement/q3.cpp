#include<iostream>
using namespace std;

int main(){
    int a=1; 
    int b=2;
    
    if (a-- > 0 || ++b >2){
        cout<<"stage-1 - Inside if=";
    }
    else{ 
        cout<<"stage-2 - Inside else=";
    }
    cout<<a<<" "<<b<<endl;
}