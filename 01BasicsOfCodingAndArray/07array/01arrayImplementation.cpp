#include <iostream>
using namespace std;

int main(){

    //declare
    int number[15];
    //accessing an array
    cout<<"Value at 4 index "<<number[4]<<endl;

    //initialising an array
    int second[3]={5, 7, 11};
    
    //accessing an element
    cout<<"value at 2nd index "<<second[2]<<endl;

    int third[15]={2,7};

    int n=15;
    cout<<"printing the array "<<endl;
    //printing the array
    for(int i=0; i<n; i++){
        cout<<third[i]<<" ";
    }
    cout<<endl;

    int fourth[10]={0};

    n=10;
    cout<<"printing the array "<<endl;
    //printing the array
    for(int i=0; i<n; i++){
        cout<<fourth[i]<<" ";
    }
    cout<<endl;


    cout<<"Everything is Fine "<<endl;
    return 0;
}