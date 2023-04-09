// 2 methods

//using recursion

class Solution {
private:
    int solve(string s,string t,int i,int j){

        //base case
        if(i==0||j==0){
            return 0;
        }
        if(s[i-1]==t[j-1]){
           return 1 + solve(s,t,i-1,j-1);
        }       
        else{
            return solve(s,t,i,j-1);
        }

}
public:
    bool isSubsequence(string s, string t) {

        int i=s.length();
        int j=t.length();

        if(s.length()>t.length()){
            return 0;
        }
        if(solve(s,t,i,j)==i){
            return 1;
        }else{
            return 0;
        }

    }
};

//using 2 pointer approach


class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;

        for(int j=0;j<t.length();j++){
            if(s[i]==t[j]){
                i++;
            }
        }
        if(i==s.length()){
            return true;
        }else{
            return false;
        }
        
    }
};