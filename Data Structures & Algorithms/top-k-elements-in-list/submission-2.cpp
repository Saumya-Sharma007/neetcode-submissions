class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq_map;
        vector<int> top_k_nums;
        for(int n : nums){
            freq_map[n]++;
        }
        while(k--){
            int max_frequency = 0;
            int max_freq_num = 0;
            for(pair<int,int> x : freq_map){
                if(x.second > max_frequency){
                    max_frequency = x.second;
                    max_freq_num = x.first;
                }
            }
            top_k_nums.push_back(max_freq_num);
            freq_map.erase(max_freq_num);
        }
        return top_k_nums;  
    }
};
