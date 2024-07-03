#include "Cong.h"

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size() - 1;
        while(left < right)
        {
            //临时变量
            //char tmp = s[left];
            //s[left] = s[right];
            //s[right] = tmp;

            //三次异或
            s[left] ^= s[right];
            s[right] ^= s[left];
            s[left] ^= s[right];

            left++;
            right--;
        }
    }
};