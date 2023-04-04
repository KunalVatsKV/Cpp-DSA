#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int bit = n&1; 
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }cout<<"Answer in binary form is:"<<ans<<endl;
int countzero=0;
int countone=0;

while(ans!=0){
    int bit1=ans%10;
    if( bit1==1){
        countone=countone+1;
    }
    else{
        countzero=countzero+1;
    }
    ans=ans/10;
    
}
cout<<"Number of 1s: "<<countone<<endl;
cout<<"Number of 0s: "<<countzero<<endl;

}






