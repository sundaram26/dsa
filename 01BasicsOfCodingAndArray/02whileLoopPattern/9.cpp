#include<iostream>
using namespace std;
//this is method one.
/*int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int col=1; 
        int count=row;
        while(col<=row){
            cout<<count<<" ";
            count=count+1;
            col=col+1;
        } 
        cout<<endl;
        row=row+1;
    }
}*/

//this is method second
int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int col=1; 
        while(col<=row){
            cout<<row+col-1<<" ";
            col=col+1;
        } 
        cout<<endl;
        row=row+1;
    }
}