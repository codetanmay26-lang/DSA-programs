class Solution {
public:
    bool check(vector<int>& nums) {
     int count=0;
     int n = nums.size();
     for(int i=0;i<n;i++){
        if(nums[i]>nums[(i+1)%n]){//so that at end it checks nums[4] with nums[0] not with nums[5] with nums[0] as nums[5] did not exist
            count++;
        }
        if(count>1)
        return false;
     }   
     return true;
    }
};