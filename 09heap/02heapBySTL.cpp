#include <iostream>
#include <queue>
using namespace std;

int main(){

    //ye maxheap hota hai
    priority_queue<int> pq;

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<"element at Top: "<<pq.top()<<endl;
    pq.pop();
    cout<<"element at Top: "<<pq.top()<<endl;
    cout<<"size is "<<pq.size()<<endl;
    if(pq.empty()){
        cout<<"pq is empty"<<endl;
    }else{
        cout<<"pq is not empty"<<endl;
    }


    //min heap
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(4);
    minheap.push(2);
    minheap.push(3);

    cout<<"element at Top: "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"element at Top: "<<minheap.top()<<endl;
    cout<<"size is "<<minheap.size()<<endl;
    if(minheap.empty()){
        cout<<"minheap is empty"<<endl;
    }else{
        cout<<"minheap is not empty"<<endl;
    }

    return 0;
}