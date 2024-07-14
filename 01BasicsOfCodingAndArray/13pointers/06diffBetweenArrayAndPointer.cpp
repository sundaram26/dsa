#include <iostream>
using namespace std;

int main(){
    int arr[10] = {23, 122, 41, 67};

    int temp[10] = {1,2};
    cout<< "1st "<< sizeof(temp) <<endl;
    cout << "2nd "<< sizeof(*temp) << endl;
    cout<< sizeof(&temp)<<endl;

    int *ptr = &temp[0];
    cout<< "3rd "<< sizeof(ptr) <<endl;
    cout<< "4th "<< sizeof(*ptr) <<endl;
    cout<< "5th "<< sizeof(&ptr) << endl;

    return 0;
}