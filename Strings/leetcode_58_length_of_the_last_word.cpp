class Solution {
public:
    int lengthOfLastWord(string s) {

        string q=s;
        reverse(q.begin(),q.end());

        if(s.length()==1){
            return 1;
        }

        int count=0;
        
        int ptr=0;

        for(int i=0;i<q.length();i++){
            if(q[i]==' '){
                ptr++;
            }else{
                break;
            }
        }

        for(int i=ptr;i<q.length();i++){
            if(q[i]!=' '){
                count++;
            }else{
                break;
            }

        }

        return count;

        
    }
};