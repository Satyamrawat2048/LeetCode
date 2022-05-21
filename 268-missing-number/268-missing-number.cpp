class Solution {
public:
    int missingNumber(vector<int>& nums) {
     int n= nums.size() ;
        map<int,int> mp ;
        for(int i:nums)
            mp[i]++;
        
        for(int i=0 ; i<=n;i++)
        if(mp[i]==0)return i;
        return 0;
    }
};