#include<iostream>
#include<math.h>
using namespace std;

int main(){
    cout<<"enter a number:"<<endl;
    int n;
    cin>> n;
    int m=n;
    int mask=0;
    if(n==0){
        cout<<1;
    }
    else{
        while(m!=0){
            mask=(mask<<1)|1;
            m=m>>1;

        }
        
        int ans1=0;
        int i=0;
        int ans=(~n)&mask;
        
        while(ans!=0){
            int bit=ans&1;
            ans1=bit*pow(10,i)+ans1;
            
           
            ans=ans>>1;
            i++;
        }cout<<ans1;
        
    
    
    }

}