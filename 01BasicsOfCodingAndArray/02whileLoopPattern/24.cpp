#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row=1;
    int count=row;
    while(row<=n){
        int space=n-row;
        while(space>0){
            cout<<" ";
            space=space-1;
        }
        int col=1;
        while(col<=row){
            cout<<count;
            col=col+1;
            count=count+1;
        }
        cout<<endl;
        row=row+1;
    }
}