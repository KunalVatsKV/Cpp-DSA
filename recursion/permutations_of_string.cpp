// question link - https://www.codingninjas.com/codestudio/problems/permutations-of-a-string_985254?leftPanelTab=0

#include<bits/stdc++.h>
void permutations(vector<string>& ans,string str,int i){
        
        
        //base case
        if(i>str.length()-1){
          
            ans.push_back(str);
            
            return ;
        }

        //recursive callss

        for(int j=i;j<str.size();j++){
            
            swap(str[i],str[j]);
            permutations(ans,str,i+1);

            //backtracking
            swap(str[i],str[j]);
           

        }

    }

vector<string> generatePermutations(string &str)
{
    vector<string> ans;
    
    permutations(ans, str, 0);

    sort(ans.begin(),ans.end());  //for lexicographically increasing order

    return ans;
}