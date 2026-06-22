class Solution {
public:
    void rotate(vector<int>& nums, int d) {

        int n= nums.size();
        if(n==0) return;
        d = d%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+d);
        reverse(nums.begin()+d,nums.end());
        
    }
};