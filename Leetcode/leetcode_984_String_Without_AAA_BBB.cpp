class Solution {
public:
    string strWithout3a3b(int a, int b) {

        string ans="";

        int countA=0;
        int countB=0;

        while(a>0 || b>0){
            
            if(countA<2 && a>=b || countB==2 && b>=a){
                ans.push_back('a');
                countA++;
                a--;
                countB=0;
            }else{
                ans.push_back('b');
                countB++;
                b--;
                countA=0;
            }
        }

        return ans;

    }
};