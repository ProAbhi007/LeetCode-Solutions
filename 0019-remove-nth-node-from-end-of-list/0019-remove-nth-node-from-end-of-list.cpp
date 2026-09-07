class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first = head;

        for(int i = 0; i < n; i++) {
            first = first->next;
        }

        if(first == NULL) {
            return head->next;
        }

        ListNode* second = head;

        while(first->next != NULL) {
            first = first->next;
            second = second->next;
        }

        second->next = second->next->next;

        return head;
    }
};