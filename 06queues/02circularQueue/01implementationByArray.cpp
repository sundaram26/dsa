#include <iostream>
using namespace std;

class CircularQueue{
    public:
        int* arr;
        int size;
        int front;
        int rear;
    
    CircularQueue(int n){
        this->size = n;
        arr = new int[n];
        front = rear = -1;
    }

    bool enqueue(int value){
        //to check whether Queue is full
        if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
            cout<<"Queue is full"<<endl;
            return false;
        }else if(front == -1){
            front = rear = 0;
        }else if(rear == size-1 && front != 0){
            rear = 0; //to maintain cycling nature
        }else{//normal flwo
            rear++;
        }
        //push inside the queue
        arr[rear] = value;
        return true;
    }

    int dequeue(){
        //to check whether Queue is empty.
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
};
int main(){

    CircularQueue cQ(5);

    cQ.enqueue(5);
    cQ.enqueue(7);
    cQ.enqueue(6);
    cQ.enqueue(8);
    

    cout<<cQ.dequeue();


    return 0;
}
















