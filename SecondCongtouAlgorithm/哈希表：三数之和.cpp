#include "Cong.h"

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for (int i = 0; i < nums.size(); i++)
        {
            //去重处理
            if (i > 0 && nums[i] == nums[i-1])
                continue;
            int target = -nums[i];
            int left = i + 1, right = nums.size() - 1;
            while(left < right)
            {
                int cur = nums[left] + nums[right];
                if (cur > target)
                {
                    right--;
                }
                else if (cur < target)
                {
                    left++;
                }
                else
                {
	                result.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    right--;
                }
            }
        }
        return result;
    }
};