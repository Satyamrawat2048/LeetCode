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
        //uisng stack
//         if(!head || !(head->next) || !(head->next->next))
//             return ;
        
//         stack<ListNode*> st ;
//         ListNode*p=head ;
//         int s=0 ;
        
//         while(p)
//         { s++ ;
//          st.push(p);
//          p=p->next ;
//         }
        
//         ListNode*p2=head ;
        
//         for(int i=0 ; i<s/2 ;i++)
//         {
//             ListNode*temp =st.top();
//             st.pop();
//             temp->next=p2->next ;
//             p2->next = temp ;
//             p2= p2->next->next ;
//         }
//         p2->next=NULL ;
        
        //using recursion
//         head=rec(head);        
//     }
//     ListNode* rec(ListNode*head )
//     {
//         if(!(head->next) || !(head->next->next))
//             return head ;
        
//         ListNode*p =head ;
//         while(p->next->next)
//             p=p->next ;
        
//         p->next->next= head->next ;
//         head->next = p->next ;
//         p->next =NULL ;
//         head->next->next = rec(head->next->next);
//         return head ;
        
        //using 2 ptr
       ListNode * mid=findmid(head) ,*midnext=mid->next;
        mid->next=NULL ;
        
        ListNode*p2= reverse(midnext);
        ListNode*p1=head ,*p1next ;
        
         while(p1 && p2){
            p1next =  p1->next;                                    
			p1->next =  p2;
			           
            p1 =  p2;
            p2=p1next;  
         }
        
    }
    ListNode* findmid(ListNode*head)
    {
        ListNode*fast=head  , *slow =head ;
        while(fast && fast ->next)
        {
            fast=fast->next->next;
            slow=slow->next ;
        }
    return slow ;
    }
    ListNode* reverse(ListNode*head)
    {
        ListNode*prev=NULL ,*nxt=NULL ;
        while(head)
        {
            nxt=head->next ;
            head->next=prev;
            prev=head ;
            head=nxt ;
        }
        return prev ;
    }
};