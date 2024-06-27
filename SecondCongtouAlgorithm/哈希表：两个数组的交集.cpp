#include "Cong.h"
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> uset(nums1.begin(), nums1.end());
        unordered_set<int> result;
        for (int i = 0; i < nums2.size(); i++)
        {
            if (uset.find(nums2[i]) != uset.end())
            {
                result.insert(nums2[i]);
            }
        }
        return vector<int>(result.begin(), result.end());
    }
};