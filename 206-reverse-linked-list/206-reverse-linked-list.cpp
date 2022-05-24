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
    ListNode* reverseList(ListNode* head) {
     // vector<int> v; //using additional space
     //    if(head==NULL) return NULL ;
     //    while(head)
     //    {
     //        v.push_back(head->val);
     //        head=head->next ;
     //    }
     //    ListNode*temp=new ListNode()  ;
     //        temp->val=v[v.size()-1] ;
     //        temp->next=NULL ;
     //    head=temp ;
     //    for(int i=v.size()-2;i>-1;i--)
     //    {
     //        ListNode*n1=new ListNode()  ;
     //        n1->val=v[i] ;
     //        n1->next=NULL ;
     //        temp->next=n1 ;
     //        temp=temp->next ;
     //    }
     //    return head;
        
        //using 3 ptrs
        // ListNode*prev = NULL;
        // while(head != NULL){
        //     ListNode*nxt = head->next;
        //     head->next = prev;
        //     prev = head;
        //     head = nxt;
        // }
        // return prev;
        
        //recursion
        if(!head || !(head->next))
            return head ;
        
        ListNode*node= reverseList(head->next) ;
        head->next->next= head ;
        head->next= NULL ;
        return node ;        
    }
};