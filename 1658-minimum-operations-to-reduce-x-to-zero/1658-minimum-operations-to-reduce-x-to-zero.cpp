class Solution {
public:
    int minOperations(vector<int>& nums, int x) 
    {//minm no = longest subarray with sum= sumofnums-x 
     int n=nums.size(),len=0;
     int tot=accumulate(nums.begin(),nums.end(),0);
     if(tot==x)
         return n;
        
        int req=tot-x;
        int i=0,j=0,sum=0;
        
        while(j<n)
        {
         sum+=nums[j];
         while(i<j and sum>req)
             sum-=nums[i++];
            
            if(sum==req)
                len=max(len,j-i+1);
            j++;
        }
        if(!len)
            return -1;
        return n-len;
    }
};

