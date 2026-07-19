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
    ListNode* rev(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* temp = head;
        while(temp != NULL) {
            ListNode* front = temp->next;
            temp ->next =prev;
            prev = temp;
            temp = front;
        }
        return prev ;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast ->next != NULL && fast ->next ->next !=NULL) {
            slow = slow->next ;
            fast = fast ->next ->next;

        }
        if(fast ->next != NULL && fast ->next ->next !=NULL) {
            return false;
        }
        ListNode* newN = rev(slow->next);
        ListNode* t  = head;
        while(newN!=NULL && t!=NULL) {
            if(newN->val != t->val) {
                return false;
            }
            newN =newN->next;
            t=t->next;

        }
        return true;
    }
};