class Solution {
public:
    bool isPalindrome(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return true;

        // Create a copy of the original linked list
        ListNode* copyHead = new ListNode(head->val);
        ListNode* copyTemp = copyHead;

        ListNode* temp = head->next;

        while (temp != NULL) {
            copyTemp->next = new ListNode(temp->val);
            copyTemp = copyTemp->next;
            temp = temp->next;
        }

        // Reverse the copied linked list
        ListNode* prev = NULL;
        ListNode* curr = copyHead;

        while (curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Compare original and reversed copy
        ListNode* original = head;
        ListNode* reversed = prev;

        while (original != NULL) {

            if (original->val != reversed->val)
                return false;

            original = original->next;
            reversed = reversed->next;
        }

        return true;
    }
};