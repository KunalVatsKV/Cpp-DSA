class Solution {
public:
    int findMin(vector<int>& nums) {

        vector<int> nums2;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                nums2.push_back(nums[i]);
            }
        }

        nums2.push_back(nums[nums.size()-1]);

        if(nums2[0]<nums2[nums2.size()-1]){
            return nums2[0];
        }

        int s = 0;
        int e = nums2.size()-1;
        int mid = s + (e-s)/2;

        while(s<e) {


            if(nums2[mid] >= nums2[0])
            {
                s = mid+1;
            }
            else{
                e = mid;
            }
            mid = s + (e-s)/2;
        }
        return nums2[s];
              
    }
};