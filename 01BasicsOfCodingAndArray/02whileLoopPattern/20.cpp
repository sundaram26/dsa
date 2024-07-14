#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int space=row-1;
        while(space>0){
            cout<<" ";
            space=space-1;
        }
        int star=n-row+1;
        while(star>0){
            cout<<"*";
            star=star-1;
        }
        cout<<endl;
        row=row+1;
    }
}   