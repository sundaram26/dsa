#include <iostream>
using namespace std;

bool binarySeach(int arr[][3], int row, int col, int target){
    int start =0;
    int end = row*col-1;

    while(start<end){
        int mid = start + (end - start)/2;
        int element = arr[mid/col][mid%col];

        if(element == target){
            return 1;
        }
        if(start < target){
            start++;
        }
        else{
            end--;
        }
    }
    return 0;
}

int main(){
    int arr[3][3] = {{1,4,7}, {10,11,12}, {14,15,17}};

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    

    int target;
    cout<<"element to search: "<<endl;
    cin>>target;

    if(binarySeach(arr, 3, 3, target)){
        cout<<"present";
    }   
    else{
        cout<<"not present";
    }

    return 0;
}