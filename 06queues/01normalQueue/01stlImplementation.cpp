#include <iostream>
#include <queue>
using namespace std;

int main(){
    //create a queue
    queue<int> q;

    q.push(11);
    cout<<"front of queue is: "<<q.front()<<endl;
    q.push(23);
    q.push(14);

    cout<<"size of queue is: "<<q.size()<<endl;

    q.pop();

    cout<<"size of queue is: "<<q.size()<<endl;

    cout<<"front of queue is: "<<q.front()<<endl;


    if(q.empty()){
        cout<<"queue is empty "<<endl;
    }
    else{
        cout<<"queue is not empty "<<endl;
    }

    return 0;
}