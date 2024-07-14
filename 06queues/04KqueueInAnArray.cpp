#include <iostream>
using namespace std;

class kQueue{
    public:
        int n;
        int k;
        int* front;
        int* rear;
        int* arr;
        int freeSpot;
        int* next;

    public:
        kQueue(int n, int k){
            this->n = n;
            this->k = k;
            front = new int[k];
            rear = new int[k];
            for(int i=0; i<k; i++){
                front[i] = -1;
                rear[i] = -1;
            }
            next = new int[n];
            for(int i=0; i<n; i++){
                next[i] = i+1;
            }
            next[n-1] = -1;
            arr = new int[n];
            freeSpot = 0;
        }
        
        void enqueue(int data, int qn){
            //overflow
            if(freeSpot == -1){
                cout<<"No empty space is present"<<endl;
                return;
            }

            //find first free index
            int index = freeSpot;

            //update freespot
            freeSpot = next[index];

            //check whether first element
            if(front[qn-1] == -1){
                front[qn-1] = index;
            }
            else{
                //link new element to the prev element
                next[rear[qn-1]] = index;
            }

            //update next
            next[index] = -1;

            //update rear
            rear[qn-1] = index;

            //push element
            arr[index] = data;
        }

        int dequeue(int qn){
            //underflow
            if(front[qn-1] == -1){
                cout<<"Queue underflow"<<endl;
                return -1;
            }

            //find index to pop
            int index = front[qn-1];

            //front ko aage badhao
            front[qn-1] = next[index];

            //freeSlots ko manage karo
            next[index] = freeSpot;
            freeSpot = index;
            return arr[index];
        }

};

int main(){

    int n, k;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    cout<<"enter the number of queue"<<endl;
    cin>>k;

    kQueue q(n, k);

    q.enqueue(10, 1);
    q.enqueue(15, 1);
    q.enqueue(20, 2);
    q.enqueue(25, 1);

    cout<< q.dequeue(1) << endl;
    cout<< q.dequeue(2) << endl;
    cout<< q.dequeue(1) << endl;
    cout<< q.dequeue(1) << endl;
    cout<< q.dequeue(1) << endl;


    return 0;
}














