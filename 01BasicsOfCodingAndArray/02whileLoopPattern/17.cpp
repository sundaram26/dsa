#include<iostream>
using namespace std;
//M-1:-
/*int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int col=1; 
        while(col<=row){
            char ch='A'+n-row+col-1;
            cout<<ch<<" ";
            col=col+1;
        } 
        cout<<endl;
        row=row+1;
    }
}*/

//M-2:-

int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int col=1;
        char ch='A'+n-row; 
        while(col<=row){
            cout<<ch<<" ";
            ch=ch+1;
            col=col+1;
        } 
        cout<<endl;
        row=row+1;
    }
}
