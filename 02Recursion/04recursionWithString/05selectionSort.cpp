#include <iostream>
#include <limits.h>
using namespace std;

void sortArray(int* arr, int n, int index){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(index == n-1){
        return;
    }
    int minIndex = index;
    for(int i=index+1; i<n; i++){
        if(arr[minIndex] > arr[i]){
            minIndex = i;
        }
    }
    swap(arr[index], arr[minIndex]);
    sortArray(arr, n, index+1);
}

int main(){
    
    int arr[5] = {3, 1, 5, 2, 6};

    int index = 0;
    sortArray(arr, 5, index);

    for(int i=0; i< 5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}