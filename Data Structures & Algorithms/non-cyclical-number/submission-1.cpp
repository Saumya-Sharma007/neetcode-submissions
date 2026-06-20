class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> umap;
        int num = n;
        while(num != 1){
            int sqSum = 0;
            while(num){
                int r = num%10;
                sqSum = sqSum + r*r;
                num = num/10;
            }
            num  = sqSum;
            if(umap.find(sqSum) == umap.end())
                umap[sqSum] = 1;
            else
                return false;
        }
        return true;
    }
};
