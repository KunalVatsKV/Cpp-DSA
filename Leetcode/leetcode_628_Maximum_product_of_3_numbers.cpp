class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int positiveans=1;
        int negetiveans=nums[nums.size()-1];

        int negcount=0;
        int count=2;

        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<0){
                negcount++;
            }
        }

        if(negcount<2){
            return nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        }else{
            positiveans=nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
            for(int i=0;i<nums.size();i++){
                if(nums[i]<0 && count>0){
                    negetiveans = negetiveans*nums[i];
                    count--;
                }
                if(count==0){
                    break;
                }
            }
        }


        return max(positiveans,negetiveans);
        
        
    }
};