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
        if(!head || !(head->next) || !(head->next->next))
            return ;
        
        stack<ListNode*> st ;
        ListNode*p=head ;
        int s=0 ;
        
        while(p)
        { s++ ;
         st.push(p);
         p=p->next ;
        }
        
        ListNode*p2=head ;
        
        for(int i=0 ; i<s/2 ;i++)
        {
            ListNode*temp =st.top();
            st.pop();
            temp->next=p2->next ;
            p2->next = temp ;
            p2= p2->next->next ;
        }
        p2->next=NULL ;
    }
};