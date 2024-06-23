#include "Cong.h"

class Solution {
public:
    int minSubArrayLen(int target, std::vector<int>& nums) {
        int slow = 0;
        int sum = 0;
        int result = INT_MAX;
        for (int fast = 0; fast < nums.size(); fast++)
        {
            sum += nums[fast];
            while (sum >= target)
            {
                result = min(result, fast - slow + 1);  //记录一下当前长度
                sum -= nums[slow++];
            }
        }
        if (result == INT_MAX) result = 0;
        return result;
    }
};

int main()
{
    Solution solution;
    vector<int> data = { 2, 3, 1, 2, 4, 3 };
    cout << solution.minSubArrayLen(7, data);
    return 0;
}