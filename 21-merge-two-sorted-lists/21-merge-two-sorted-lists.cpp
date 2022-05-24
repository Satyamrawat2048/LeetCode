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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode*l3=new ListNode() ;
        
        if(!l1) return l2;
        if(!l2) return l1;
        
      if(l1->val <l2->val) {l3= l1 ;
                             l1=l1->next ;}
        else {l3=l2 ; 
              l2=l2->next ;}
     ListNode*node=l3;
        while(l1 && l2)
        {
            if(l1->val <l2->val)
            { ListNode*temp=new ListNode();
                temp->val=l1->val ;
                temp->next= l1->next;
             l3->next=temp ;
                l3=l3->next ;
                l1=l1->next ;
            }
            else {ListNode*temp=new ListNode();
                temp->val=l2->val ;
                temp->next= l2->next;
                 l3->next=temp ;
                l3=l3->next ;
                l2=l2->next ;
               }
        }
        while(l1)
        { ListNode*temp=new ListNode();
                temp->val=l1->val ;
                temp->next= l1->next;
             l3->next=temp ;
                l3=l3->next ;
                l1=l1->next ;          
        }
        while(l2)
        {ListNode*temp=new ListNode();
                temp->val=l2->val ;
                temp->next= l2->next;
                 l3->next=temp ;
                l3=l3->next ;
                l2=l2->next ;
        }
        return node;
    }
};