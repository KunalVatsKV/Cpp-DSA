#include<iostream>
using namespace std;


//using recursion

//more optimised

int power(int base,int pwr){
    
    if(pwr==0){
        return 1;  //base case #1
    }
    if(pwr==1){
        return base;  //base case #2
    }

    int ans=power(base,pwr/2); //recursive call;

    if(pwr%2==0){   //even power
        return ans*ans;
    }else{
        return base*ans*ans;  //odd power
    }


}
int main(){

    int base;
    cout<<"Enter Base: "<<endl;
    cin>>base;
    
    int pwr;
    cout<<"Enter power: "<<endl;
    cin>>pwr;

    int ans=power(base,pwr);

    cout<<"Answer: "<<ans<<endl;

    return 0;

}