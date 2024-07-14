#include <iostream>
using namespace std;

void sortedArr(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        if(i!=minIndex){
            swap(arr[minIndex], arr[i]);
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
    int arr[6]= {3, 4, 6, 3, 2, 1};

    sortedArr(arr, 6);
    cout<<"sorted array is: "<<endl;
    printArray(arr, 6);

    return 0;
}