/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*slow= head, *fast =head;
        int c=0 ;
        
        while(fast && fast->next)
        {   
            slow= slow->next;
            fast= fast->next->next;
            if(slow==fast ) {c=1;break;}
        }
        if(c==0 )return NULL ;
        cout<<slow->val;
        fast= head ;
        while(true)
        {
         if(fast==slow)  return fast ;
            fast = fast->next;
            slow= slow->next ;
        }
        return NULL;
    }
};