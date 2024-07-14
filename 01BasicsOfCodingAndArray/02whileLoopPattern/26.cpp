#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int col1=row;
        int count1=1;
        while(col1<=n){
            cout<<count1;
            col1=col1+1;
            count1=count1+1;
        }
        
        char star1=row-1;
        while(star1>0){
            cout<<"*";
            star1=star1-1;
        }
        char star2=row-1;
        while(star2>0){
            cout<<"*";
            star2=star2-1;
        }
        int col2=row;
        int count2=1;
        while(col2<=n){
            cout<<count2;
            col2=col2+1;
            count2=count2+1;
        }

        cout<<endl;
        row=row+1;
    }
}