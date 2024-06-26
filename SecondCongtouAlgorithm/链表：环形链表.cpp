#include "Cong.h"
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        if (head == nullptr) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* meet = nullptr;
        //找到相遇点
        while (fast->next && fast->next->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (slow == fast) //找到相遇点
            {
                meet = slow;
                break;
            }
        }
        //从环开始处和相遇位置开始遍历
        if (meet == nullptr) return nullptr;
        slow = head;
        while (slow != meet)
        {
            slow = slow->next;
            meet = meet->next;
        }
        return slow;
    }
};