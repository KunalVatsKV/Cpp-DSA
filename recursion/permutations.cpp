class Solution {
private:
    void permutations(vector<vector<int>>& ans,vector<int> nums,int i){
        
        //base case
        if(i>nums.size()-1){
            ans.push_back(nums);
            return ;
        }

        //recursive call

        for(int j=i;j<nums.size();j++){

            swap(nums[i],nums[j]);
            permutations(ans,nums,i+1);

            //backtracking
            swap(nums[i],nums[j]);

        }

    }
public:
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;
        permutations(ans,nums,0);

        return ans;
        
    }
};