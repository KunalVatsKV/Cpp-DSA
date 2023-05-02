//LinkedList - Linear Data Structure
//           - Collection of Nodes


// Node - Data + Address of Next Node

#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }



};

void InsertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}

void InsertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next=temp;
    tail=temp;
    
}

void print(Node* &head){
    Node* temp=head;
    
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;

}




int main(){

    //created a new node
    Node* node1 = new Node(20);

    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    //head pointed to node1
    Node* head=node1;

    print(head);

    InsertAtHead(head,12);

    print(head);

    InsertAtHead(head,3);

    print(head);


    //for tail
 
    Node* tail=node1;

    InsertAtTail(tail,30);
    print(head);

    InsertAtTail(tail,50);
    print(head);








}