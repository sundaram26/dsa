#include<iostream>
using namespace std;

int main(){

//1st
    // for(int i=0; i<=5;i++){
    //     cout<<i<<" ";
    //     i++;
    // }//output=0 2 4

//2nd
    // for(int i=0; i<=15; i+=2){
    //     cout<<i<<" ";
    //     if(i&1){
    //         continue;
    //     }
    //     i++;//output=0 3 5 7 9 11 13 15
    // }

//3rd
    // for(int i=0; i<=5;i--){
    //     cout<<i<<" ";
    //     i++;
    // }//output=infinite loop

//4th
    // for(int i=0; i<5;i++){
    //     for(int j=i;j<=5;j++){
    //         cout<<i<<" "<<j<<endl;
    //     }
    // }

//5th
    for(int i=0; i<5;i++){
        for(int j=i;j<=5;j++){
            if(i+j==10){
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
}