#include "Cong.h"

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        //key: a+b结果 value: a+b出现次数
        unordered_map<int, int> umap;
        for (auto num1 : nums1)
        {
            for (auto num2 : nums2)
            {
                umap[num1 + num2]++;
	        }
        }
        int cnt = 0;
        for (auto num3 : nums3)
        {
	        for (auto num4 : nums4)
	        {
                int key = 0 - num3 - num4;
                if (umap.find(key) != umap.end())
                {
                    cnt += umap[key];
                }
	        }
        }
        return cnt;
    }
};