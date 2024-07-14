#include <iostream>
using namespace std;

int main(){

    int arr[10];

//Error
    // arr= arr+1;

    int *ptr = &arr[0];
    ptr = ptr + 1;
    cout<< ptr <<endl;

    return 0;
}