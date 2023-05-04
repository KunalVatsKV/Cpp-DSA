// Singly linked list = data + next node address
// doubly linked list = previous node address + data + next node address
#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};

//traversing a linked list
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//gives length of the linsked list
int getLength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;

}

//inserting at head position
void InsertAtHead(Node* &head,int d){

    //if list is empty
    if(head==NULL){
        Node* temp= new Node(d);
        head=temp;
    }
    else
    {
        Node* temp = new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }

  
}


//inserting at tail position
void InsertAtTail(Node* &tail,int d){

    if(tail==NULL){
        Node* temp= new Node(d);
        tail=temp;
    }
    else{
        Node* temp = new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
  
    
}

//inserting at any position
void InsertAtPosition(Node*& head,Node*& tail,int position,int d){

    //insert at first position
    if(position==1){
        InsertAtHead(head,d);
        return;
    }

    Node* temp = head;

    int count=1;

    while(count<position-1){
        temp=temp->next;
        count++;
    }

    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;

    }

    Node* nodeToInsert = new Node(d);

    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    nodeToInsert->prev=temp;
    temp->next=nodeToInsert; 
    
}

//deleting node
void DeleteNode(Node*& head,Node*& tail,int position){

    //deleting first node or staring node
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        //memory free ->start node
        temp->next=NULL;
        temp->prev=NULL;
        delete temp;
    }
    else{
        //for middle or last node
        Node* current=head;
        Node* previous=NULL;
        int count=1;
        while(count<position){
            count++;
            previous=current;
            current=current->next;
        }
        
        //means that it is the last node;
        if(current->next==NULL){
            tail=previous;
        }

        previous->next=current->next;
        current->next=NULL;
        current->prev=NULL;     
        delete current;

    }

}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;

    print(head);
    //cout<<getLength(head)<<endl;

    InsertAtHead(head,20);
    print(head);

    Node* tail = node1;
    InsertAtTail(tail,5);
    print(head);

    InsertAtPosition(head,tail,2,15);
    print(head);

    DeleteNode(head,tail,2);
    print(head);

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

    return 0;

}