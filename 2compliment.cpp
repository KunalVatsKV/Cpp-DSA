#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int arr[32]={0};
    
    int j=31;
    while(n!=0){
        int bit = n&1; 
        arr[j]=bit;
        n=n>>1;
        j--;
    }
 
  int k=31;
  while(arr[k]!=1){
    k=k-1;
    
  }
  //cout<<k<<endl;

  for(int i=k-1;i>=0;i--){
    if(arr[i]==0){
        arr[i]=1;
    }else{
        arr[i]=0;
    }
  }

   for(int i=0;i<32;i++){
    cout<<arr[i]<<" ";
  }

}
