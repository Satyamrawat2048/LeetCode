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
    ListNode *getIntersectionNode(ListNode *a, ListNode *b) {
        ListNode*p1= a;
        ListNode*p2=b ;
        
        if(!p1 || !p2) return NULL ;
        
        while(p1 &&p2 && p1!= p2)
        {
            p1=p1->next ;
            p2=p2->next ;
            
            if(p1==p2) return p1;
            
            if(p1==NULL) p1=b;
            if(p2==NULL) p2=a;
        }
        return p1 ;
    }
};