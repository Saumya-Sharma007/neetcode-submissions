class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // long long int prod = 1;
        // int countZero = 0;
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i] != 0)
        //     prod = prod*nums[i];
        //     else
        //     countZero++;
        // }
        // vector<int> ans(nums.size(),0);
        // if(countZero == 0){
        //     for(int i=0; i<nums.size(); i++){
        //         ans[i] = prod/nums[i];
        //     }
        // }
        // if(countZero == 1){
        //     for(int i=0; i<nums.size(); i++){
        //         if(nums[i] == 0)
        //         ans[i] = prod;
        //         else
        //         ans[i] = 0;
        //     }
        // }
        // if(countZero > 1){
        //     return ans;
        // }
        // return ans;
        int n = nums.size();
        vector<int> left_prod(n,1);
        vector<int> right_prod(n,1);
        vector<int> result_prod;
        for(int i=1; i<n; i++){
            left_prod[i] = left_prod[i-1]*nums[i-1];
            right_prod[n-i-1] = right_prod[n-i]*nums[n-i];
        }
        for(int i=0; i<n; i++){
            result_prod.push_back(left_prod[i]*right_prod[i]);
        }
        return result_prod;
    }
};
