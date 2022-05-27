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
    int pairSum(ListNode* head) {
       ListNode*mid=findmid(head) ;
        mid=reverse(mid);
        
        int ans=0;
        while(mid)
        {
            ans= max(head->val+mid->val,ans );
            head=head->next ;
            mid=mid->next;
        }
        return ans ;
    }
   
};