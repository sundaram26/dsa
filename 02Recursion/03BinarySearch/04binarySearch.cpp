#include <iostream>
using namespace std;

bool binarySearch(int* arr, int s, int e, int k){
    //base case:-
    //element not found.
    if(s > e){
        return false;
    }
    
    int mid = s + (e-s)/2;

    //element found.
    if(arr[mid]==k){
        return true;
    }
    
    if(arr[mid] < k){
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, e-1, k);
    }
}
int main(){

    int arr[8] = {2, 4, 6, 7, 8, 10, 12, 14};
    int size = 8;
    int key = 12;

    bool ans = binarySearch(arr, 0, 8, key);

    if(ans == true){
        cout<<"element is present"<<endl;
    }
    else{
        cout<<"element is not found"<<endl;
    }

    return 0;
}