class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int longest =1;
        int cnt  = 0;
        int last_Smaller = INT_MIN;
        
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++) {
            if(nums[i]-1 == last_Smaller) {
                cnt++;
                last_Smaller = nums[i];
            }
            else if(nums[i] != last_Smaller) {
                cnt = 1;
                last_Smaller = nums[i];
            }
            longest = max(cnt,longest);
        }
        return longest;
    }
};