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
    void reorderList(ListNode* head) {
        ListNode* t = head;
        int c = 0;
        ListNode* temp = head ;
        stack<ListNode*> st;
        while(temp!=NULL) {
            st.push(temp);
            temp  = temp->next;
            c++;
        }
        for(int i = 0;i<c/2;i++) {
            ListNode* tn = t->next;
            t->next = st.top();
            st.top()->next = tn;
            st.pop();
            t = tn;
        }
        
        t->next = NULL;
        return ;
    }
};