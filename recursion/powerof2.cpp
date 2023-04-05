#include<iostream>
using namespace std;


//using recurrsion

//this is a head recurrsion
//because the processing part is at the end of the program


int power(int n){

    if(n==0){
        return 1;
    }

    return 2*power(n-1);
   
}

int main(){

    cout<<"Enter the power of 2: "<<endl;

    int n;
    cin>>n;

    int ans = power(n);

    cout<<ans<<endl;
   

    return 0;


}