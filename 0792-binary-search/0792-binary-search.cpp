class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2; // prevents overflow

            if (nums[mid] == target) {
                return mid;  // target found
            }
            else if (nums[mid] < target) {
                low = mid + 1;  // search right half
            }
            else {
                high = mid - 1; // search left half
            }
        }

        return -1;  // target not found
        
    }
};