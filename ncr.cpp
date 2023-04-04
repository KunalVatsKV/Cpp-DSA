#include<iostream>
using namespace std;

int factorial(int a){
    
    int ans=1;
    while(a>=1){
        
        ans=ans*a;
        a=a-1;
        ;
        
    }return ans;
}

int nCr(int n,int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int r;
    cout<<"Enter r"<<endl;
    cin>>r;

    int answer=nCr(n,r);
    cout<<"Answer is:"<<answer;
    
}