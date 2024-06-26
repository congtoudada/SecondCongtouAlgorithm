#include "Cong.h"
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* dummyHead = new ListNode();
        dummyHead->next = head;
        ListNode* cur = dummyHead;
        while (cur->next != nullptr && cur->next->next != nullptr)
        {
            ListNode* cacheNext = cur->next->next->next;
            ListNode* cacheTmp = cur->next->next;
            
            cacheTmp->next = cur->next;
            cur->next = cacheTmp;
            cacheTmp->next->next = cacheNext;
            cur = cacheTmp->next;
        }
        return dummyHead->next;
    }
};