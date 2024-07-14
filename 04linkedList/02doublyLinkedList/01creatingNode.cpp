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

//traversing of linked list
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" "<<endl;
        temp = temp->next;
    }
    cout<<endl;
}

//gives length of linked list
int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    print(head);
    cout<<getLength(head)<<endl;

    return 0;
}