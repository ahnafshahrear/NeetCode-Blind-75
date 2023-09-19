public:
    ListNode* reverseList(ListNode* head) 
    {
        ListNode *pre = nullptr;
        while (head != nullptr and head->next != nullptr)
        {
            ListNode *temp = head->next;
            head->next = pre;
            pre = head;
            head = temp;
        }
        if (head != nullptr) head->next = pre;
        return head;
    }
};
