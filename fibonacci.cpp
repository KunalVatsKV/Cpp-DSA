#include<iostream>
using namespace std;

int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    int sum=1;
    //cout<<a<<" "<<b<<" ";
    for (int i = 2; i < n; i++)
    {
        int next = a + b;
        a = b;
        b = next;
        

        
        sum=sum+next;
        //cout<<b<<" ";
        } 
        
    return sum;

}

int main()
{
    int n;
    cin >> n;
    
    //cout << "The " <<n<<"th term of the series is = "<< fibonacci(n) << endl;
    int x=fibonacci(n);
    cout<<x;

    return 0;
}