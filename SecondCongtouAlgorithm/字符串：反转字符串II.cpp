#include "Cong.h"

class Solution {
public:
    void reverseLocal(string& s, int left, int right)
    {
        //使用库函数
        reverse(s.begin() + left, s.begin() + right + 1);

        //自定义
        //while (left < right)
        //{
        //    //临时变量
        //    //char tmp = s[left];
        //    //s[left] = s[right];
        //    //s[right] = tmp;

        //    //三次异或
        //    s[left] ^= s[right];
        //    s[right] ^= s[left];
        //    s[left] ^= s[right];

        //    left++;
        //    right--;
        //}
    }

    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += 2*k)
        {
            //数量够k个
            if (i + k < s.size())
            {
                reverseLocal(s, i, i + k - 1);
            }
            else
            {
                reverseLocal(s, i, s.size() - 1);
            }
        }
        return s;
    }
};