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
    ListNode* mergeInBetween(ListNode* h1, int a, int b, ListNode* h2) {
        ListNode*head=h1,*p =NULL;
        int c= 0;
        while(c<a-1)
        {
            h1=h1->next ;c++;
        }
       p= h1->next ;
        
        while(c<b){
            p= p->next; c++ ;
        }
        
        h1->next= h2 ;
        
        while(h1->next)
            h1=h1->next ;
        
        h1->next=p ;
        return head ;

    }
};