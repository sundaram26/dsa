#include <iostream>
using namespace std;

class Deque{
    public:
        int* arr;
        int front;
        int rear;
        int size;
    
    Deque(int n){
        this-> size = n;
        arr = new int[n];
        front = rear = -1;
    }

    bool pushFront(int x){
        if((front == 0 && rear == size-1) || ( front != 0 && rear == (front-1)%(size-1) )){
            return false;
        }else if(front == -1) {
            front = rear = 0;
        }else if(front == 0 && rear != size -1){
            front = size-1;
        }else{
            front--;
        }
        arr[front] = x;
        return true;
    }

    bool pushRear(int x){
        if((front == 0 && rear == size-1) || ( front != 0 && rear == (front-1)%(size-1))){
            return false;
        }else if(front == -1) {
            front = rear = 0;
        }else if(rear == size-1 && front != 0){
            front = 0;
        }else{
            rear++;
        }
        arr[rear] = x;
        return true;
    }

    int popFront(){
        if(front == -1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear){ //one element in the queue
            front = rear = -1;
        }else if(front == size-1){
            front = 0; //to maintain cycling nature;
        }else{
            front++; //normal flow 
        }
        return ans;
    }
    int popRear(){
        if(front == -1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;
        if(front == rear){ //one element in the queue
            front = rear = -1;
        }else if(rear == 0){
            rear = size-1; //to maintain cycling nature;
        }else{
            rear--; //normal flow 
        }
        return ans;
    }
    int getFront(){
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }
    int getRear(){
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }
    bool isEmpty(){
        if(front == -1){
            return true;
        }else{
            return false;
        }
    }
};
int main(){

    Deque dq(6);

    dq.pushFront(5);
    dq.pushRear(7);
    cout<<dq.getFront()<<endl;
    cout<<dq.getRear()<<endl;
    
    dq.popFront();
    dq.popRear();

    cout<<dq.getFront()<<endl;
    cout<<dq.getRear()<<endl;

    if(dq.isEmpty()){
        cout<<"dequeue is empty "<<endl;
    }else{
        cout<<"dequeue is not empty "<<endl;
    }

    return 0;
}










