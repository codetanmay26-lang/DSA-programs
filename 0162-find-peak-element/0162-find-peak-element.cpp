class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int high = nums.size()-1;

        int low=0;
        while(low<high){
            int mid = (low+high)/2;
            if(nums[mid]<nums[mid+1]){// increasing slope → peak on right
                low=mid+1;
            }
            else{// decreasing slope → peak on left (including mid)
                high=mid;
            }
    }
    return low;// index of peak
    }
};