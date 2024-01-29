#include <iostream>
#include <queue>
using namespace std;


//NON - Linear Data structure


//Node -  1 element with some data in it eg - int


//binary tree - each node has <=2 children node

//root - staring point of tree

//leaf node - root with no children;

//INORDER - LNR

//PREORDER - NLR

//POSTORDER - LRN


class node{
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        //cout<<"Constructor called"<<endl;
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};


node* buildTree(node* root){

    cout<<"Enter the data: "<<endl;
    int val;
    cin>>val;

    if(val==-1){
        return NULL;
    }

    root = new node(val);
    root->data=val;
    //root->data=val;

    

    cout<<"Enter data for inserting in left of node: "<<val<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in right of node:  "<<val<<endl;
    root->right=buildTree(root->right);

}


void levelOrderTraversal(node* root){
    queue<node*> q;

    q.push(root);

    while(!q.empty()){
        node* temp=q.front();
        cout<<temp->data<<endl;
        q.pop();

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }

      
}

int main(){

    node* root=NULL;

    //creating a tree

    root=buildTree(root);

    levelOrderTraversal(root);

    return 0;
}