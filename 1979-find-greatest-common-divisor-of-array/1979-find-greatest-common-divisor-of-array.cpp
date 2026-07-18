class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = nums[0];
        int max = nums[0];
        for(int i=1;i<nums.size();i++) {
            if(nums[i] < min)
                min = nums[i];
            else if(nums[i] > max ) 
                max = nums[i];
        }
        while(min > 0 && max > 0) {
            if(max>min) max = max%min;
            else min = min%max;
        }
        if(min==0) return max;
        else return min;
    }
};