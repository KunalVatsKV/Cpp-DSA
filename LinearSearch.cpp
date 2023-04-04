#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int size,int x){
    
    

    for(int i=0;i<size;i++){
        if(arr[i]==x){
            return 1;
            
        }

        }return 0;
        
}

int main(){
    int arr[10]={5,-36,7,8,9,-1,7,56,-3,19};
    //tell whether 1 is present or not
    //tell whether 7 is present or not
    
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
