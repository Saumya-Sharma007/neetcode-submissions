class Solution {
public:
    bool isAnagram(string s, string t) {
        //TC: TC: O(nlogn)+O(mlogm)+O(n) SC: O(1)
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s.compare(t)==0;   // or s==t

        //s and t consist of lowercase English letters.
        if(s.size() != t.size())
            return false; 
        int freq[26] = {0};
        for(char c : s){
            freq[c-'a']++;
        }
        for(char c : t){
            freq[c-'a']--;
            if(freq[c-'a'] < 0)
                return false;
        }
        return true;
    }
};
