class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //using unordered set, TC: O(n) SC: O(n)
        unordered_set<int> uset;
        for(int i=0; i<nums.size(); i++){
            if(uset.find(nums[i]) != uset.end())
                return true;
            uset.insert(nums[i]);
        }
        return false;
    }
};

/*
Other approches:
1) Just iterate entire nums and check is nums[i] == nums[j] -> true
TC: O(n^2) SC: O(1)

2) Sort, if nums[i] == nums[j] -> true [O(nlogn)+O(n)]
TC: ~O(nlogn) SC: O(1)
*/