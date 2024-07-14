#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    bool isPrime=1;

    // for(int i=2;i<n;i++){
    //     if(n%i==0){
    //         cout<<"Number is not prime"<<endl;
    //         break;
    //     }
    //     else{
    //         cout<<"Number is prime"<<endl;
    //     }
    // }

    for(int i=2; i<n;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    if (isPrime==0){
        cout<<"Not a prime Number"<<endl;
    }
    else{
        cout<<"is a prime number"<<endl;
    }
}