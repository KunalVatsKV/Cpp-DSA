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



}