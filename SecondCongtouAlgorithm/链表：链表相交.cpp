#include "Cong.h"

class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int lenA = 1, lenB = 1;
        ListNode* pA = headA;
        while (pA)
        {
            pA = pA->next;
            lenA++;
        }
        ListNode* pB = headB;
        while (pB)
        {
            pB = pB->next;
            lenB++;
        }
        pA = headA;
        pB = headB;
        if (lenA > lenB)
        {
            int diff = lenA - lenB;
            
            for (int i = 0; i < diff; i++)
            {
                pA = pA->next;
            }
        }
        else
        {
            int diff = lenB - lenA;
            for (int i = 0; i < diff; i++)
            {
                pB = pB->next;
            }
        }

        while (pA && pB && pA != pB)
        {
            pA = pA->next;
            pB = pB->next;
        }
        if (pA == pB) return pA;
        else return nullptr;
    }
};