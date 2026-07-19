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
    ListNode* rotateRight(ListNode* head, int k ) {
        if(head ==NULL ||head->next == NULL) return head;
        ListNode* tail = head;
        int len = 1;
        while(tail->next != NULL ){
            len++;
            tail = tail->next;
        }
         k = k%len;
        if(k == 0) return head;
        else{
            int ifr = len-k;
            int c = 0;
            ListNode* temp = head;
            for( int i =1; i< ifr ; i++ ) {
                
                temp = temp->next;
            }
            tail->next = head;
            if(temp->next ) head = temp->next;
            temp->next = NULL;
        }
        return head;
    }
};