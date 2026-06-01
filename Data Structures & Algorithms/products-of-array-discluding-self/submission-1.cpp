class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int prod = 1;
        int countZero = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0)
            prod = prod*nums[i];
            else
            countZero++;
        }
        vector<int> ans(nums.size(),0);
        if(countZero == 0){
            for(int i=0; i<nums.size(); i++){
                ans[i] = prod/nums[i];
            }
        }
        if(countZero == 1){
            for(int i=0; i<nums.size(); i++){
                if(nums[i] == 0)
                ans[i] = prod;
                else
                ans[i] = 0;
            }
        }
        if(countZero > 1){
            return ans;
        }
        return ans;
    }
};
