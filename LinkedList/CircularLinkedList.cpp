// Singly linked list = data + next node address
// doubly linked list = previous node address + data + next node address
//circular linked list = last node points to null

#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next; 

    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }


};

void print(Node*& tail){

    Node* temp=tail;

    if(tail == NULL){
        cout<<"list is empty"<<endl;
        return ;
    }
    
    do {
        cout << temp -> data << " ";
        temp = temp -> next;
    } while(temp != tail);

    cout << endl;

}

void InsertNode(Node*& tail,int element,int d){
    
    //empty list
    if(tail == NULL){
        Node* newnode = new Node(d);
        tail=newnode;
        tail->next=tail;
    }
    else{
        //assuming that the element is present in the list
        //non-empty list

        Node* current = tail;

        while(current->data!=element){
            current=current->next;
        }

        Node* newnode = new Node(d);

        newnode->next=current->next;
        current->next=newnode;


    }
    
}

void DeleteNode(Node*& tail,int value){

    //empty List
    if(tail==NULL){
        cout<<"List is already empty"<<endl;
        return;
    }
    else{
        //non-empty
        //value is there to delete
        Node* previous=tail;
        Node* current=previous->next;

       
        
        while(current->data!=value){
            previous=current;
            current=current->next;
        }
        
        previous->next=current->next;

        //1 Node linked List
        if(current==previous){
            tail=NULL;
            
        }
        // >=2 Node Linked List
        else if(tail==current){
            tail=previous;
        }

        current->next=NULL;
        delete current;

    }

    

}

int main(){


    Node* tail = NULL;

    //Inserting in empty List
    InsertNode(tail,5,10);

    print(tail);

    InsertNode(tail,10,20);

    print(tail);

    InsertNode(tail,10,15);

    print(tail);

    DeleteNode(tail,15);

    print(tail);



    return 0;
}