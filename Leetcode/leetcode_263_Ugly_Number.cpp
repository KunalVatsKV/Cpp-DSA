class Solution {
private:
    void check(int& n){
        if(n%2==0){
            n=n/2;
            check(n);
        }
        else if(n%3==0){
            n=n/3;
            check(n);
        }
        else if(n%5==0){
            n=n/5;
            check(n);
        }
        else{
            return ;
        }
    }
public:
    bool isUgly(int n) {

        if(n<=0){
            return false;
        }
        if(n>=1 && n<=6){
            return true;
        }

        check(n);

        if(n==1){
            return true;
        }else{
            return false;
        }
        
    }
};