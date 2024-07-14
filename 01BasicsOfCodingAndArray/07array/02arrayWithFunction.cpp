#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"printing the array "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing done "<<endl;
}

 
int main(){
    int number[15]={3,5,2,7,8,4,1,9,18,13,5};
    printArray(number, 10);


    //for size of an array
    int numberSize= sizeof(number)/sizeof(int);
    cout<<"size of number is "<< numberSize<<endl;

    return 0;
}