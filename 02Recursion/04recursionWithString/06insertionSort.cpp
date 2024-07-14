#include <iostream>
using namespace std;

void insertionSort(int* arr, int n){
    if(n<=1){
        return;
    }
    int last = arr[n-1];
    int i= n-2;
    while(i>=0 && arr[i]>last){
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = last;
    insertionSort(arr, n-1);
}
int main(){

    int arr[5] = {5, 2, 7, 1, 8};

    insertionSort(arr, 5);

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}