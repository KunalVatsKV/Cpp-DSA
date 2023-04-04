#include<iostream>
using namespace std;
int findUnique(int arr[], int size)
{   
    int x=0;
    for(int i=0;i<size;i=i+1){
        x=x^arr[i];
    } 
    return x;
}

int main(){

    int arr[]={5,3,1,5,1,4,7,4,3,8,8};
    int size=sizeof(arr)/sizeof(arr[0]);

    
    int ans=findUnique(arr,size);
    cout<<ans<<endl;
    

}
      
    
    
     
    
    
    
    
