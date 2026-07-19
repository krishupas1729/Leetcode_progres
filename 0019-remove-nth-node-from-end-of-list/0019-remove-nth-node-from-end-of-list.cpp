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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast =head;
        ListNode* slow = head;
        while(fast->next != NULL) {
            if(n<=0) {
                slow = slow->next;

            }
            n--;
            fast = fast->next;
            
        }
        if(n==1) {
            ListNode* newhead=head->next;
            delete head;
            return newhead;
        }
        ListNode* del = slow->next;
        slow->next = slow->next->next;
        delete del;
        return head;
    }
};