#include <bits/stdc++.h>
using namespace std;

class BST{

    public:
        int val;
        BST* left;
        BST* right;

    BST(int data){
        this->val=data;
        this->left=NULL;
        this->right=NULL;
    }

};

void printTree(BST* root){

    queue<BST*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        BST* temp=q.front();
        q.pop();
        
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->val<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}

BST* insertion(BST* root,int data){

    //base case
    if(root==NULL){
        root=new BST(data);
        return root;
    }

    if(data>root->val){
        root->right=insertion(root->right,data);
    }else{
        root->left=insertion(root->left,data);
    }

}

void input(BST*& root){

    int data;
    cin>>data;

    while(data!=-1){
        root=insertion(root,data);
        cin>>data;
    }

}

int main(){

    BST* root=NULL;

    cout<<"Enter data for BST: "<<endl;
    input(root);

    cout<<"Printing Tree."<<endl;
    printTree(root);

    return 0;

}
