#include<iostream>
using namespace std;

void LinearSearch(int arr[],int size,int x){
    
    int k=0;
    int count=0;

    for(int i=k;i<size;i++){
        if(arr[i]==x){
            count+=1;
            k=i+1;
            
        }

        }cout<<"The number of occourences are: "<<count;
        
}

int main(){
    int arr[]={5,5,5,5,-36,7,8,9,-1,7,56,-3,19};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    
    cout<<"enter the element:"<<endl;
    int x;
    cin>>x;
    
    LinearSearch(arr,size,x);
    


    return 0;
}
