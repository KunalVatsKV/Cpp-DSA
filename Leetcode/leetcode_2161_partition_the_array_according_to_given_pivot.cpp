class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        vector<int> ans(nums.size());

        int totalless=0;
        int totalequal=0;

        for(int i:nums){
            if(i<pivot){
                totalless++;
            }else if(i==pivot){
                totalequal++;
            }
        }

        int lessposi=0; //we start filling lesser numbers from the start, i.e 0
        int equalposi=totalless; //then we fill the equal elements from the postition after the less ones are filled
        int greaterposi=totalless+totalequal; //then we fill greater elements from the position after both less and equal elements are filled

        for(int i:nums){
            if(i<pivot){
                ans[lessposi++]=i;
            }
            else if(i==pivot){
                ans[equalposi++]=i;
            }else{
                ans[greaterposi++]=i;
            }
        }

        return ans;
        
    }
}