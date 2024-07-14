#include <iostream>
#include <queue>

using namespace std;

int main(){

    //max_heap
    priority_queue<int> maxi;

    //min_heap
    priority_queue<int, vector<int> , greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(6);

    cout<<"size: "<<maxi.size()<<endl;

    int n= maxi.size();
    cout<<"max heap queue: "<<endl;
    for(int i=0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;


    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(6);

    cout<<"size: "<<mini.size()<<endl;

    int a= mini.size();
    cout<<"min heap queue: "<<endl; 
    for(int i=0; i<a; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;


    cout<<"is it empty or not: "<<mini.empty()<<endl;
}