#include <iostream>
using namespace std;

bool linearSearch(int* arr, int n, int key){
    //base case:-
    if(n == 0){
        return false;
    }
    if(key == arr[0]){
        return true;
    }    
    else{
        bool remainingPart = linearSearch(arr+1, n-1, key);
        return remainingPart;
    }
}
int main(){

    int arr[5] = {3, 5, 1, 2, 7};
    int size = 5;

    bool ans = linearSearch(arr, size, 8);
    if(ans == 1){
        cout<< "found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    return 0;
}