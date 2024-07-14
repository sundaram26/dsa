#include <iostream>
using namespace std;

insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp= arr[i];
        int j;
        for(j=i-1; j>=0; j--){
            if(arr[j]> temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

printArray(int arr[], int n){
    for(int i=1; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6]={17, 13, 24, 14, 5, 6};

    insertionSort(arr, 6);
    cout<<"sorted array: "<<endl;
    printArray(arr, 6);
}