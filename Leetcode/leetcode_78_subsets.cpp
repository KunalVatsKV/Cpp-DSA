class Solution {
private:
   void powersetbuilder(vector<int> nums,vector<int> subset, int i,vector<vector<int>>& powerset){
       
       //base case
       if(i>nums.size()-1){
           powerset.push_back(subset);   //base case
           return ;     
       }

       //case 1 - excluding the element

       powersetbuilder(nums,subset,i+1,powerset);

       //case 2 - including the element

       int element=nums[i];
       subset.push_back(element);
       powersetbuilder(nums,subset,i+1,powerset);

   }

public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> powerset;
        vector<int> subset;

        int i=0;

        powersetbuilder(nums,subset,i,powerset);

        return powerset;
        
    }
};