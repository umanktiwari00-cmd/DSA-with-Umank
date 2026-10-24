class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int start = -1,end = -1;
        int low = 0 ,high = nums.size()-1;

        // Lower Bound
        while(low<=high) {
            int mid = low +(high-low)/2;
            if(nums[mid]>= target) {
                if(nums[mid] == target) start = mid;
                high = mid - 1 ;
            }
            else {
                low = mid+1;
            }
        }

        // Upper Bound 
        low =0,high = nums.size()-1;
     if(start != -1 ) {
        end = nums.size()-1;
        while(low<=high) {
            int mid = low +(high-low)/2;
            if(nums[mid] > target) {
                end = mid-1;
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
    }

    return {start,end};
    }
};