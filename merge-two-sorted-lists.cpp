class Solution {
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *mergedList = new ListNode();
        ListNode *head = mergedList;

        while (list1 and list2)
        {
            if (list1->val <= list2->val)
            {
                mergedList->next = new ListNode(list1->val);
                mergedList = mergedList->next;
                list1 = list1->next;
            }
            else
            {
                mergedList->next = new ListNode(list2->val);
                mergedList = mergedList->next;
                list2 = list2->next;
            }
        }

        if (list1) mergedList->next = list1;
        else mergedList->next = list2;

        return head->next;
    }
};
