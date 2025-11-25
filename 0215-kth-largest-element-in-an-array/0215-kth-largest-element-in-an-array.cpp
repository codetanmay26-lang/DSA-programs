class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      sort(nums.rbegin(), nums.rend());
      int ans= nums[k-1];
      return ans;
    }
};