#include <iostream>
#include <stack>
using namespace std;

int main(){
    //creation of stack
    stack<int> s;

    //push operation
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    //pop operation
    s.pop();

    //top operation
    cout<<"printing top element: "<<s.top()<<endl;

    //empty operation
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }

    //size operation
    cout<<"size of stack is "<<s.size()<<endl;

    return 0;
}