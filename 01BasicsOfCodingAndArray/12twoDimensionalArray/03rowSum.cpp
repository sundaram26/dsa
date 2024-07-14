#include <iostream>
#include <limits.h>
using namespace std;

void rowSum(int arr[][3], int row, int col){
    cout<<"printing sum: "<<endl;
    for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0; col<3; col++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
}

int largestRowSum(int arr[][3], int row, int col){
    int maxi = INT_MIN;
    int rowIndex= -1;
    for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0; col<3; col++){
            sum += arr[row][col];
        }
        if(sum>maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout<<"the maximum sum is "<<maxi<<endl;
    return rowIndex;
}

int main(){
    int arr[3][3];

    cout<<"enter the elements:"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"printing the array: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // rowSum(arr, 3, 3);   

    int ansIndex= largestRowSum(arr, 3,3);
    cout<<"max row is at index: "<< ansIndex<<endl;   
    return 0;
}