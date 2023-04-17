class Solution {
private:
    int operations(int num1,int num2, int i){
        //base case
        if(num1==0 || num2==0){
            return i;
        }
        //base case
        if(num1==num2){
            return i+1;
        }
        else if(num2>num1){
            return operations(num1,num2-num1,i+1);      
        }
        else{
            return operations(num1-num2,num2,i+1);
        }
    }
public:
    int countOperations(int num1, int num2) {
        

        int ans = operations(num1,num2,0);

        return ans;
        
    }
};