class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //using sort O(nlogn)
        //using map o(n)
//      int n= nums.size() ;
//         map<int,int> mp ;
//         for(int i:nums)
//             mp[i]++;
        
//         for(int i=0 ; i<=n;i++)
//         if(mp[i]==0)return i;
//         return 0;
        
    //using maths o(n)
//      int n= nums.size() ;
//         int sum1= n*(n+1)/2 ,sum=0;
//         for(int i=1 ; i<n ; i++)
//         sum+= nums[i];
        
//         return sum1-sum;

// bit manipulation
      int res= nums.size();
        for(int i=0 ; i< nums.size(); i++)
        {
            res^=i;
            res^=nums[i];
        }
    return res; }
};