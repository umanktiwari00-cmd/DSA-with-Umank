class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int cnt=0,x,longest=0;
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++) {
            st.insert(nums[i]);
        }
        for(auto it:st) {
            if(st.find(it-1) == st.end()) {
                x = it;
                cnt = 1;
                while(st.find(x+1) != st.end()) {
                    x = x+1;
                    cnt++;
                }
                
            }
            longest = max(cnt,longest);
        }
        return longest;
    }
};