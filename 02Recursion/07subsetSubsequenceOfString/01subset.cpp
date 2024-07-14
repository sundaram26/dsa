#include <iostream>
using namespace std;

void solve(int arr, int output, int index, int& arr[][])
int subsets(int arr){
    int** ans = new int[n];
    for(int i=0; i< n; i++){
        ans[i] = new int[n];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>> ans[i][j];
        }
    }
    cout<<endl;

    int output;
    int index = 0;

    solve(arr, output, index, ans);

    return ans;
}
int main(){

    int arr[3] = {1, 2, 3};
    int n = 3; 

    subsets(arr)

    return 0;
}