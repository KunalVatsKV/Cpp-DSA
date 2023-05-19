#include <iostream>
using namespace std;

void print(int n){

    //base case
    if(n==0){
        return ;
    }

    print(n-1);

    cout<<n<<endl;
   
}

int main(){

    print(5);

    return 0;
}