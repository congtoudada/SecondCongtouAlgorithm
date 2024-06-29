#include "Cong.h"

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash[26] = { 0 };
        for (auto c : magazine)
        {
            hash[c - 'a']++;
        }
        for (auto c : ransomNote)
        {
	        if (hash[c - 'a'] < 1)
	        {
                return false;
	        }
            else
            {
                hash[c - 'a']--;
            }
        }
        return true;
    }
};