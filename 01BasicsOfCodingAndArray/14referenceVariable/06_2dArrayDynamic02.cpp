#include <iostream>
using namespace std;

int main(){

    int row;
    cin>>row;
    int col;
    cin>>col;

    //2d array
    int** arr = new int* [row];
    for(int i=0; i<row; i++){
        arr[i]= new int [col];
    }

    //input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    
    //output
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //memory free kaise karani hai.
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }

    delete []arr;
    

    return 0;
}