#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<int> q;

    q.push(5);
    q.push(7);
    q.push(3);

    cout<<"before size: "<<q.size()<<endl;

    cout<<"first element: "<<q.front()<<endl;

    q.pop();

    cout<<"after pop first element: "<<q.front()<<endl;

    cout<<"size: "<<q.size()<<endl;

}