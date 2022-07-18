class Solution {
public:
    // int subarraySum(vector<int>& a, int k) {
    // int n= a.size(),c=0 ;
    //     cout<<n;
    //     for(int i=0 ; i< n; i++)
    //     { int sum =0 ;
    //         for(int j=i ; j < n ; j++) 
    //         { 
    //          sum+= a[j] ;
    //          if(sum==k) c++ ;
    //         }
    //     }
    //     return c; 
    // }
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int sum=0,ans=0;
        mp[sum] = 1;
        for(auto it:nums){
            sum += it;
            int find = sum - k;
            if(mp.find(find) != mp.end()){
                ans += mp[find];
            }
            mp[sum]++;
        }
        return ans;
    }
};