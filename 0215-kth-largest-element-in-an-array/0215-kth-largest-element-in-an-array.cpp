class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
  priority_queue<int> pq;
  for(int num:nums){
  pq.push(num);
    }
  for(int r=0;r<k-1;r++){
    pq.pop();
  }
return pq.top();
    }
};