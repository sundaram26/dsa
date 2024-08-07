#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
void insertAtHead(Node* &head, Node* &tail, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}
void insertAtTail(Node* &head, Node* &tail, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        temp->prev = tail;
        tail -> next = temp;
        tail = temp;
    }
}
void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    // insert at start
    if(position == 1){
        insertAtHead(head, tail, d);
        return;
    }   
    Node* temp = head;
    int cnt = 1;
    while(cnt < position - 1){
        temp = temp -> next;
        cnt++;
    }
    // insert at last
    if(temp -> next == NULL){
        insertAtTail(head, tail, d);
        return;
    } 
    //any mid position insert
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next ->prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 6);
    print(head);

    insertAtTail(head, tail, 13);
    print(head);

    insertAtPosition(head, tail, 3, 12);
    print(head);
    insertAtPosition(head, tail, 4, 16);
    print(head);

    return 0;
}