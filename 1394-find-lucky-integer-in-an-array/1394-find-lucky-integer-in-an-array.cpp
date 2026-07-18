class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(auto it:arr){
            mpp[it]++;
        }
        int maxLucky = -1;
        for(auto it : mpp) {
            if(it.first == it.second) {
                int ans = it.first;
                maxLucky = max(maxLucky,ans);
            }
        }
        return maxLucky;
    }
};