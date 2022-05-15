class Solution {
public:
    int largestCombination(vector<int>& can) 
    {
        int ans= 0; 
        
        for(int i=0 ; i< 32;i++)
            {  // Count how many numbers in nums have bit 1 at ith position.
            int curr=0 ;
             
             for(auto num :can)//to push ith bit at 0th position, if its 1 then its AND with 1 will result 1
            curr +=  (num>>i)&1 ;
            
        ans=max(ans, curr);
         }
        return ans;
    }
};