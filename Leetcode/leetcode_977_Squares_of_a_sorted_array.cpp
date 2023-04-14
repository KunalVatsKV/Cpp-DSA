class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int> nums2;

        int i=0;
        int j=nums.size()-1;

        while(i<=j){
            if(nums[i]*nums[i]>=nums[j]*nums[j]){
                nums2.push_back(nums[i]*nums[i]);
                i++;
            }else{
                nums2.push_back(nums[j]*nums[j]);
                j--;
            }
        }

        reverse(nums2.begin(),nums2.end());

        return nums2;
        
    }
};