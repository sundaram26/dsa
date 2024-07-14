#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    //for round 1 to n-1
    bool swapped = false;
    for(int i=1; i<n; i++){
        //process elelment till n-i th index.
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            //already sorted
            break;
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6]= {18, 13, 11, 15, 12, 5};

    bubbleSort(arr, 6);
    cout<<"sorted array: "<<endl;    
    printArray(arr, 6);

    return 0;
}