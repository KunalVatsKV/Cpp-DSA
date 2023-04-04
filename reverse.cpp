
#include<iostream>
#include<math.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int ans=0;
    
    while(n!=0){
        if((ans>INT_MAX/10)|| (ans<INT_MIN/10)){
            break;
        }
        int digit =n%10;
        ans=(ans*10)+digit;
        n=n/10;
       

    }
    cout<<"the ans is:"<<ans<<endl;
}

