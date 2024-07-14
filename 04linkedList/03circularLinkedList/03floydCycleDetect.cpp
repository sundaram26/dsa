#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this-> data = d;
        this-> next = NULL;
    }

    ~Node(){
        int val = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free for node with data "<<val<<endl;
    }
};
void insertNode(Node* &tail, int element, int d){
    
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        Node* curr = tail;
        while(curr -> data != element){
            curr= curr -> next;
        }
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}
void print(Node* &tail){
    Node* temp = tail;
    do{
        cout<<tail ->data <<" ";
        tail = tail ->next;
    }
    while(tail!= temp);
    cout<<endl;
}

Node* floydDetectLoop(Node* head){
    if(head == NULL)
        return NULL;
    
    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
        
        if(slow == fast) {
            cout<< "present at "<<slow -> data<<endl;
            return slow;
        }
    }
    return NULL;
}
Node* getStartingNodeOfLoop(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    if(intersection == NULL){
        return NULL;
    }
    Node* slow = head;
    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}
void removeLoop(Node* head){
    if(head == NULL){
        return;
    }
    Node* startOfLoop = getStartingNodeOfLoop(head);   
    if(startOfLoop == NULL){
        cout<<"there is no loop"<<endl;
    }
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop){
        temp = temp -> next;
    }
    temp -> next = NULL;
}
int main(){

    Node* tail = NULL;
    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 5);
    print(tail);
    insertNode(tail, 5, 7);
    print(tail);
    insertNode(tail, 7, 9);
    print(tail);
    insertNode(tail, 5, 6);
    print(tail);
    insertNode(tail, 9, 10);
    print(tail);
    insertNode(tail, 3, 4);
    print(tail);

    if(floydDetectLoop(tail)){
        cout<<"circular list"<<endl;
    }else{
        cout<<"not circular list"<<endl;
    }

    cout<<"The Value of Starting Node of Loop is"<<getStartingNodeOfLoop(tail)-> data<<endl;

    removeLoop(tail);
    print(tail);

    return 0;
}