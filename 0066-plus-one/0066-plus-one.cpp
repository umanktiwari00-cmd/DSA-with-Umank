class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Traverse the array from the rightmost digit (least significant)
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++; // Increment the current digit
                return digits; // No carry-over, safe to return early
            }
            // If the digit is 9, it becomes 0
            digits[i] = 0;
        }
        
        // If the loop finished, it means all digits were 9 (e.g., 999 -> 000)
        // We need to insert a '1' at the beginning
        digits.insert(digits.begin(), 1);
        
        return digits;
    }
};