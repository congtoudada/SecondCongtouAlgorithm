#include "Cong.h"

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> path;
        while(n != 1)
        {
            //找到环路
	        if (path.find(n) != path.end())
	        {
                return false;
	        }
            path.insert(n);
            n = calc(n);
        }
        return true;
    }

    int calc(int n)
    {
        int sum = 0;
        while(n != 0)
        {
            int mod = n % 10;
            n /= 10;
            sum += mod * mod;
        }
        return sum;
    }
};