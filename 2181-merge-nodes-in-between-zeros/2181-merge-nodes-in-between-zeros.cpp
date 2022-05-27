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
public:ListNode* mergeNodes(ListNode* head){

    if(!(head->next)) return NULL ;
    
    ListNode* p =head->next ;
    int sum=0 ;
    while(p->val) 
        sum+=p->val ,p=p->next  ;
    
        //assign sum on the first node between nodes having value 0.

    head->next->val = sum;
    head->next->next = mergeNodes(p);
    return head->next ;
}
};