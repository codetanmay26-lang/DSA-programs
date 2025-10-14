class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        // We need at least 2*k elements to form two adjacent subarrays of length k
        if (n < 2 * k) return false;

        for (int i = 0; i <= n - 2 * k; ++i) {
            bool first = true, second = true;
            // Check first subarray [i, i + k - 1]
            for (int j = i; j < i + k - 1; ++j) {
                if (nums[j] >= nums[j + 1]) {
                    first = false;
                    break;
                }
            }
            // Check second subarray [i + k, i + 2k - 1]
            if (first) {
                for (int j = i + k; j < i + 2 * k - 1; ++j) {
                    if (nums[j] >= nums[j + 1]) {
                        second = false;
                        break;
                    }
                }
                if (second) return true;
            }
        }

        return false;
        
    }
};