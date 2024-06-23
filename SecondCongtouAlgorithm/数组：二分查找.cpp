#include "Cong.h"

class Solution {
public:
    //左闭右开
    int search(std::vector<int>& nums, int target) {
        int left = 0, right = nums.size();
        while (left < right)
        {
            int mid = (left + right) / 2;
            if (nums[mid] > target)
            {
                right = mid;
            }
            else if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }

    //左闭右闭
    //int search(std::vector<int>& nums, int target) {
    //    int left = 0, right = nums.size() - 1;
    //    while (left <= right)
    //    {
    //        int mid = (left + right) / 2;
    //        if (nums[mid] > target)
    //        {
    //            right = mid - 1;
    //        }
    //        else if (nums[mid] < target)
    //        {
    //            left = mid + 1;
    //        }
    //        else
    //        {
    //            return mid;
    //        }
    //    }
    //    return -1;
    //}
};

//int main()
//{
//    Solution solution;
//    vector<int> data = { -1, 0, 3, 5, 9, 12 };
//    cout << solution.search(data, 9) << endl;
//    return 0;
//}