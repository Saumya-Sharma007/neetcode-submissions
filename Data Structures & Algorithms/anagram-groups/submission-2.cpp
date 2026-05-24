class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //Aproach: 1
        //Making strings sorted, and using it as keys to store other strings as value.
        //TC: O(m.nlogn) Here sorting component is making it costly. [m = #strings & n = approx len of each string] 
        //SC: O(m).
        // unordered_map<string,vector<string>> umap;
        // for(auto s : strs){
        //     string key = s;
        //     sort(key.begin(),key.end());
        //     umap[key].push_back(s);
        // }
        // vector<vector<string>> result;
        // for(auto it : umap){
        //     result.push_back(it.second);
        // }
        // return result;

        //Approch: 2. We have just remove the sorting part. We r keeping the freq. Exmple: "abbc" - "1#2#1". Using this string as key to store other anagrams as value.
        //TC: O(mn), SC: O(m)       [m = #strings & n = approx len of each string]
        unordered_map<string,vector<string>> umap;
        for(auto s : strs){
            char freq[26] = {0};
            for(char c : s){
                freq[c - 'a']++;
            }
            string key = "";
            for(int i=0; i<26; i++){
                key = key+freq[i]+"#";
            }
            umap[key].push_back(s);
        }
        vector<vector<string>> result;
        for(auto it : umap){
            result.push_back(it.second);
        }
        return result;
    }
};
