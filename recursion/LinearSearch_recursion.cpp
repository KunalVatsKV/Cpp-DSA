#include<iostream>
using namespace std;

//using recursion

bool LinearSearch(int* arr,int size,int x){

    
    if(arr[0]==x){
        return true;
    }
    if(size==0){
        return false;
    }else{
        return LinearSearch(arr+1,size-1,x);   
    }

}

int main(){
    int arr[10]={5,-36,7,8,9,-1,7,56,-3,19};

    cout<<"enter the element you want to find"<<endl;
    int x;
    cin>>x;

    
    bool ans=LinearSearch(arr,10,x);
    if(ans){
        cout<<"element is present."<<endl;
    }
    else{
        cout<<"element is not present."<<endl;
    }
    


    return 0;
}
