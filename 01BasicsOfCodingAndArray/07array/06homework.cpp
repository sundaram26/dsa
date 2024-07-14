#include <iostream>
using namespace std;


//sum of all the element of an array
int sum(int arr[], int n){
    int ans=0;
    for(int i=0; i<n; i++){
        // int ans= arr[i]+arr[i+1];
        ans=ans+arr[i]; 
    }
    return ans;
}

int main(){ 
    int sumArr[100];
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the element of array: ";
    for(int i=0; i<size; i++){
        cin>>sumArr[i];
    }
    cout<<"sum of all the element: "<<sum(sumArr, size);
    return 0;
}