class Solution {
public:
    int pairSum(ListNode *head) 
    {
        ListNode *slow = head, *fast = head;
        while (fast and fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        slow = reverse(slow);
        int ans = 0;
        while (slow)
        {
            ans = max(slow->val + head->val, ans);
            slow = slow->next;
            head = head->next;
        }
        return ans;
    }
private:
    ListNode* reverse(ListNode* head)
    {
        ListNode *prev = nullptr, *next = nullptr;
        while (head)
        {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        } 
        return prev;
    }
};
