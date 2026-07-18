class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int size=nums.size();
        vector<int> ans(size);
        int j=0,k=n;
        for(int i=0;i<size;i++) {
            if(i%2==0) {
                ans[i] = nums[j];
                j++;
            }
            else {
                ans[i] = nums[k];
                k++;
            }
        }

        return ans;
       }

};