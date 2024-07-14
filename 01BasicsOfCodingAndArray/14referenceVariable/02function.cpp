#include <iostream>
using namespace std;

// int& func(int a){
//     int num = a;
//     int& ans = num;
//     return ans;
// } //Don't use this method it is not good practice          

// int* fun(int n){
//     int* ptr = &n;
//     return ptr;
// }  //this is also not good practice

void update2(int& n){
    n++;
}
void update1(int n){
    n++;
}

int main(){

    int n=5;
    cout <<"before: "<< n<< endl;
    update2(n);  
    cout << "after: "<<n<<endl;

    // fun(n);

    return 0;
}