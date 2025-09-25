#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num)) {
                return num;  // duplicate found
            }
            seen.insert(num);
        }
        return -1;  // should never reach here given problem constraints
    }
};
