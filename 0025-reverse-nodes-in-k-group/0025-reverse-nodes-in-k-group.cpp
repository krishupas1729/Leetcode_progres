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
    ListNode* rev(ListNode * head ) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while( temp != NULL ) {
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    ListNode* findknode(ListNode * t, int k ){
        k--;
        while(t!= NULL && k>0) {
            k--;
            t=t->next;
        }
        return t;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* t = head;
        ListNode* nnext = NULL;
        ListNode* prevn = NULL;
        while(t!=NULL) {
            ListNode* knode  = findknode(t,k);
            if(knode == NULL) {
                if(prevn ) {
                    prevn->next = t;
                }
            break;
            }
            nnext =knode->next;
            knode ->next =NULL;
            rev(t);
            if(t == head) head = knode;
            else prevn->next = knode;
            prevn=t;
            t = nnext;
                

            
        }
        return head;
    }
};