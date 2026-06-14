class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //TC: O(nlogn) SC: O(1)
        // int ans = 1, count = 1;
        // if(nums.size() == 0)
        // return 0;
        // sort(nums.begin(), nums.end());
        // for(int i=1; i<nums.size(); i++){
        //     if(nums[i]-nums[i-1] == 0)
        //     continue;
        //     else if(nums[i]-nums[i-1] == 1){
        //         count++;
        //         if(count > ans){
        //             ans = count;
        //         }
        //     }
        //     else{
        //         count = 1;   
        //     }
        // }
        // return ans;

        int longest = 0;
        unordered_set<int> st(nums.begin(), nums.end());
        for(int n : st){
            if(st.find(n-1) == st.end()){
                int CurrLen = 1;
                int CurrNum = n;
                while(st.find(CurrNum+1) != st.end()){
                    CurrNum++;
                    CurrLen++;
                }
                longest = max(longest, CurrLen);
            }
        }
        return longest;
    }
};
