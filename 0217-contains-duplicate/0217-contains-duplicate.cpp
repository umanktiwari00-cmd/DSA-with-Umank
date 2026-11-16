// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         map<int,int> mpp;

//         for(int i=0;i<nums.size();i++) {
//             mpp[nums[i]]++;
//         }
//         for(auto it:mpp) {
//             if(it.second > 1) return true;
//         }
//         return false;
//     }
// };

class Solution {
    public:
     bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st(n);

        for( auto it: nums) {
            auto res = st.insert(it);
            if(res.second == false) return true;
        }
        return false;
        
     }
};