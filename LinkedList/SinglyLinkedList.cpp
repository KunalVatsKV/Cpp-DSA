//LinkedList - Linear Data Structure
//           - Collection of Nodes


// Node - Data + Address of Next Node

#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next; 

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //destructor
    // ~Node(){
    //     int value=this->data;
    //     if(this->next!=NULL){ 
    //         delete next;
    //         this->next=NULL;
    //     }

    //     cout<<"Memory free for node with data: "<<this->data<<endl;
    // }




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

void InsertAtPosition(Node*& head,Node*& tail,int position,int d){
    Node* temp = head;

    //insert at first position
    if(position==1){
        InsertAtHead(head,d);
        return;
    }

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
    temp->next=nodeToInsert; 
    
}

void DeleteNode(Node*& head,Node*& tail,int position){

    //deleting first node or staring node
    if(position==1){
        Node* temp=head;
        head=head->next;
        //memory free ->start node
        temp->next=NULL;
        delete temp;
    }
    else{
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
        delete current;

    }

}

void DeleteNodeByValue(Node*& head,Node*& tail,int value){

    //deleting first node or staring node
    if(value==head->data){
        Node* temp=head;
        head=head->next;
        //memory free ->start node
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* current=head;
        Node* previous=NULL;
        
        while(current->data!=value){
            previous=current;
            current=current->next;
        }
        
        //means that it is the last node;
        if(current->next==NULL){
            tail=previous;
        }

        previous->next=current->next;
        current->next=NULL;
        delete current;

    }

}


int main(){

    //created a new node
    Node* node1 = new Node(20);

    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

   

    //head pointed to node1
    Node* head=node1;

    print(head);

    cout<<endl;
    cout<<"Interting at Head:"<<endl;

    InsertAtHead(head,12);

    print(head);

    InsertAtHead(head,3);

    print(head);

    cout<<endl;
    cout<<"Interting at tail:"<<endl;
    //for tail
 
    Node* tail=node1;

    InsertAtTail(tail,30);
    print(head);

    InsertAtTail(tail,50);
    print(head);

    cout<<endl;

    cout<<"Inserting 40 in 5th posi:"<<endl;
    InsertAtPosition(head,tail,5,40);
    print(head);

    cout<<endl;

    cout<<"Deleting the element at 3rd position:"<<endl;
    DeleteNode(head,tail,3);
    print(head);

    cout<<endl;

    cout<<"Deleting the element by value (deleting 40 here)"<<endl;
    DeleteNodeByValue(head,tail,40);
    print(head);

    cout<<endl;
    
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;



}