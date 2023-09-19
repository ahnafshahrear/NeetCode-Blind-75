class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        ListNode *previous = nullptr;
        while (head != nullptr and head->next != nullptr)
        {
            ListNode *next = head->next;
            head->next = previous;
            previous = head;
            head = next;
        }
        if (head != nullptr) 
        {
            head->next = previous;
        }
        return head;
    }
};
