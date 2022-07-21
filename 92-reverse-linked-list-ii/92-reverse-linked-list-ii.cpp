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
    ListNode* rev(ListNode* head,int c) {
    
        ListNode*prev = NULL;
        c=c+1; 
        while(c--){
            ListNode*nxt = head->next;
            head->next = prev;
            prev = head;
            head = nxt;
        }
        return prev;
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!(head->next)) return head; 
        
        ListNode *p1, *p2,*ptr=head ; 
        
          if(left==1) 
        {   ListNode*p= head ;
          
              for(int i=0; i<right ;i++) p=p->next ;
                  
            ListNode*prev= rev(head, right-left ) ;
           ptr->next= p ;
         
           return prev ;
        }
        
        for(int i=0 ; i<left-2 ;i++) head=head->next ;
        
        p1=head ;
        p2=head->next ;
        
      
         head= head->next->next ;
       int i=right- left ;
        ListNode*nxt =head ,*prev=p2;
        
        while(i-- && head)
        { nxt = head->next ;
          head->next  = prev;
         prev =head ;
         head =nxt ;        
        }
        p2->next= nxt ;
        p1->next= prev ;
      
        return ptr ;
    }
};