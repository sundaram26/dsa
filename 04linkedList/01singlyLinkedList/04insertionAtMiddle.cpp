#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this-> data = data;
        this-> next = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    //new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtMiddle(Node* &tail, Node* &head, int position, int d){
    
    //inserting at 1st position

    if(position==1){
        insertAtHead(head, d);
        return;
    }
    Node* temp  = head;
    int count = 1;

    while(count < position -1){
        temp = temp -> next;
        count++;
    }

    //inserting at last position
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 13);
    print(head);
    insertAtTail(tail, 14);
    print(head);

    insertAtMiddle(tail, head, 4, 22);
    print(head);

    cout<< "head "<<head -> data <<endl;
    cout<< "tail "<<tail -> data <<endl;

    return 0;
}