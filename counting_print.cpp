#include<iostream>
using namespace std;


//using recurrsion

//this is a tail recurrsion  (processing is above recursive relation)
//because the processing part is at the middle of the program and recursive relation is at the end


void print(int n){

    if(n==0){
        return ;
    }

    cout<<n<<endl;  //tail recursion 

    print(n-1);

    //cout<<n<<endl;   this makes it head recursion because recursive relation is above processing
   
}

int main(){

    cout<<"Enter the number: "<<endl;

    int n;
    cin>>n;

    cout<<endl;

    print(n);

    return 0;


}