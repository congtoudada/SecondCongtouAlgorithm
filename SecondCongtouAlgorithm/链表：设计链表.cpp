#include "Cong.h"

//PS:做题不管内存泄露
class MyLinkedList {
private:
    ListNode* head;
    int length;
public:
    MyLinkedList() {
        head = nullptr;
        length = 0;
    }
    
    int get(int index) {
        if (index < 0 || index >= length)
        {
            return -1;
        }
        ListNode* tmp = new ListNode();
        tmp->next = head;
        for (int i = 0; i < index; i++)
        {
            tmp = tmp->next;
        }
        return tmp->next->val;
    }

    void addAtHead(int val) {
        ListNode* node = new ListNode(val);
        node->next = head;
        head = node;
        length++;
    }

    void addAtTail(int val) {
        ListNode* node = new ListNode(val);
        if (head == nullptr)
        {
            length++;
            head = node;
            return;
        }
        ListNode* tmp = head;
        while (tmp->next)
        {
            tmp = tmp->next;
        }
        tmp->next = node;
        length++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > length)
        {
            return;
        }
        if (index == 0)
        {
            addAtHead(val);
            return;
        }
        ListNode* tmp = head;
        for (int i = 1; i < index; i++)
        {
            tmp = tmp->next;
        }
        ListNode* node = new ListNode(val);
        node->next = tmp->next;
        tmp->next = node;
        length++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= length)
        {
            return;
        }
        ListNode* virhead = new ListNode();
        virhead->next = head;
        ListNode* tmp = virhead;
        for (int i = 0; i < index; i++)
        {
            tmp = tmp->next;
        }
        tmp->next = tmp->next->next;
        head = virhead->next;
        length--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

//int main()
//{
//    MyLinkedList* list = new MyLinkedList();
//    list->addAtIndex(0, 10);
//    list->addAtIndex(0, 20);
//    list->addAtIndex(1, 30);
//    cout << list->get(0);
//    return 0;
//}