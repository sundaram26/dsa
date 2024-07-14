#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<int> s;

    s.push(3);
    s.push(4);
    s.push(5);
   

    cout<<"is empty: "<<s.empty()<< endl;

    // cout<<"swap: "<<s.swap()<<endl;

    cout<<"top element: "<<s.top()<< endl;

    cout<<"size of stack: "<<s.size()<< endl;


    return 0;
}