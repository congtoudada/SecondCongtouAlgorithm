#include "Cong.h"

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        //思路：多嵌套一层的三数之和
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            long target1 = target - nums[i];
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                long target2 = target1 - nums[j];
                int left = j + 1, right = nums.size() - 1;
                while(left < right)
                {
                    long sum = nums[left] + nums[right];
                    if (sum > target2)
                    {
                        right--;
                    }
                    else if (sum < target2)
                    {
                        left++;
                    }
                    else
                    {
                        result.push_back({ nums[i], nums[j], nums[left], nums[right] });
                        while (left < right && nums[left] == nums[left + 1]) left++;
                        left++;
                        while (left < right && nums[right] == nums[right - 1]) right--;
                        right--;
                    }
                }
            }
        }
        return result;
    }
};