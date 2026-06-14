class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size()-1;
        vector<int> indexes;
        while(left < right){
            if(numbers[left] + numbers[right] == target){
                indexes.push_back(left+1);
                indexes.push_back(right+1);
                return indexes;
            }
            if(numbers[left] + numbers[right] > target)
                right--;
            if(numbers[left] + numbers[right] < target)
                left++;
        }
        return indexes;
    }
};
