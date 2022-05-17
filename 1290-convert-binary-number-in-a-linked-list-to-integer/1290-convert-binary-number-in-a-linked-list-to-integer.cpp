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
// class Solution {
// public:
//     int getDecimalValue(ListNode* head) 
//     {
//         int sum =0, c=0;
//         ListNode* temp= head ;
//         while(temp)
//         {
//             temp=temp->next ; c++;
//         }
//         c--;
//         while(head)
//         {  sum+= head->val *(pow(2,c)) ;
//             c--; head= head->next ;
//         }
//         return sum;
//     }
// };

class Solution
{
    public:
    int getDecimalValue(ListNode* head)
    {
        int sum=1; 
        if(head->val==0)  sum=0;
        while(head->next!= NULL)
        {
            sum=sum*2 + head->next->val ;
            head= head->next ;
        }
        return sum ;
    }
};