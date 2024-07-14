#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start=0;
    int end=n-1;

    int mid=(start + end)/2;

    while(start <= end){
        if(arr[mid]==key){
            return mid;
        }
        //go to left wala part
        if(key<arr[mid]){
            end=mid-1;
        }
        //go to right wala part
        else{
            start= mid+1;
        }
        mid=(start+end)/2;
    }
    //value is not present in array
    return -1;
}

int main(){

    int even[6]={2, 5, 11, 16, 17, 22};
    int odd[5]={2, 6, 12, 13, 32};


    int index1 = binarySearch(even, 6, 16);
    cout<<"index of 16 is: "<<index1<<endl;
    int index2 = binarySearch(odd, 5, 6);
    cout<<"index of 6 is: "<<index2<<endl;
    
    return 0;
}