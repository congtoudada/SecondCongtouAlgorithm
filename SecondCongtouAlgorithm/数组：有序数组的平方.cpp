#include "Cong.h"

class Solution {
public:
	std::vector<int> sortedSquares(std::vector<int>& nums) {
		int left = 0, right = nums.size() - 1;
		int k = nums.size() - 1;
		vector<int> result(nums.size());
		while (left <= right)
		{
			if (nums[left] * nums[left] > nums[right] * nums[right])
			{
				result[k--] = nums[left] * nums[left];
				left++;
			}
			else
			{
				result[k--] = nums[right] * nums[right];
				right--;
			}
		}
		return result;
	}
};