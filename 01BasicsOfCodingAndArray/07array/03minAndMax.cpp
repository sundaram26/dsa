#include <iostream>
#include <limits.h>
using namespace std;

int getMax(int num[], int n){
    // int max= INT_MIN;

    int maxim = INT_MIN;
    for(int i=0; i<n; i++){

        maxim = max(maxim, num[i]);

        // if(num[i]>max){
        //     max= num[i];
        // }
    }
    return maxim;
    // return max;
}
int getMin(int num[], int n){
    // int min= INT_MAX;
    int mini= INT_MAX;

    for(int i=0; i<n; i++){
        
        mini =min(mini, num[i]);
        
        // if(num[i]<min){
        //     min= num[i];
        // }
    }
    return mini;
}

int main(){
    int size;
    cin>>size;

    int num[100];

    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    cout<<"Maximum value is "<< getMax(num, size)<<endl;
    cout<<"Minimum value is "<<getMin(num, size)<<endl;

    return 0;
}