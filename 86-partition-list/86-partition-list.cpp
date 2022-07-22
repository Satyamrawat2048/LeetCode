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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* f= new ListNode(0) ,*b= new ListNode(0),*front = f ,*back=b ,*curr=head ;
        
        while(curr)
        {
            if(curr->val <x )
            {
                front->next = curr ;
                front = curr ;
            }
            else 
            {
                back->next = curr ;
                back = curr ;
            }
            curr= curr->next ;
        }
        front ->next =b->next;
        back->next = NULL ;
        return f->next ;
        
    }
};