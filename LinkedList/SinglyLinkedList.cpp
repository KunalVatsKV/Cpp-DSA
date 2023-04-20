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


int main(){

    Node* nodel = new Node(20);

    cout<<nodel->data<<endl;
    cout<<nodel->next<<endl;




}