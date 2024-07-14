#include <iostream>
using namespace std;

int main(){
    int arr[10] = {23 ,122 ,41 , 67};

    cout<< " address of first memory block is "<< arr<< endl;
    cout<<arr[0]<<endl; //this will give value stored in the block
    cout<< " address of first memory block is"<< &arr[0]<<endl;

    cout<< "4th "<<*arr<<endl;
    cout<<" 5th "<< *arr +1 <<endl;
    cout<<" 6th "<< *(arr + 1)<<endl;
    cout<<" 7th "<< *(arr) + 1<<endl;
    cout<< " 8th "<< arr[2] <<endl;
    cout<< " 9th "<< *(arr + 2)<<endl;

    return 0;
}