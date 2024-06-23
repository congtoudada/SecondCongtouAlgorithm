#include "Cong.h"

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int slow = 0, fast = 0;
        for (; fast < nums.size(); fast++)
        {
            nums[slow] = nums[fast];
            if (nums[fast] != val)
            {
                slow++;
            }
        }
        return slow;
    }
};
