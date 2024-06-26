#include "Cong.h"

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr) return head;
        ListNode* virHead = new ListNode();
        virHead->next = head;
        ListNode* cur = head;
        ListNode* pre = virHead;
        while (cur != nullptr)
        {
            if (cur->val == val)
            {
                cur = cur->next;
                delete(pre->next);
                pre->next = cur;
            }
            else
            {
                cur = cur->next;
                pre = pre->next;
            }
        }
        return virHead->next;
    }
};