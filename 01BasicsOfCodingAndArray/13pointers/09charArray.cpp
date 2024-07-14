#include <iostream>
using namespace std;

int main(){

    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout<<arr<<endl; // print address
    cout<<ch<<endl;  // print entire string

    char *c = &ch[0];
    cout << c << endl;  // print entire string


//risky hai kabhi nahi karna...
    // char temp = 'z';
    // char *p = &temp;
    // cout<< p << endl;

    return 0;
}