class Solution {
private:
    void solve(vector<string>& ans,string combinations,unordered_map<char,string> mp,string digits,int i){

        //base case
        if(i>=digits.length()){
            ans.push_back(combinations);
            return ;
        }

        string letters=mp[digits[i]];

        for(int j=0;j<letters.length();j++){
            combinations.push_back(letters[j]);
            solve(ans,combinations,mp,digits,i+1);
            combinations.pop_back();
        }

    }
public:
    vector<string> letterCombinations(string digits) {

        vector<string> ans;
        string combinations;

        if(digits.length()==0){
            return ans;
        }

        unordered_map<char,string> mp={{'0',""},{'1',""}, {'2',"abc"},{'3',"def"} ,{'4', "ghi"}, {'5',"jkl"},{'6',"mno"} , {'7',"pqrs"},{'8',"tuv"} , {'9',"wxyz"}};

        solve(ans,combinations,mp,digits,0);

        return ans;

        
    }
};