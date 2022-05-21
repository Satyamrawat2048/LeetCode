class Solution {
public:
    int singleNumber(vector<int>& nums) { 
        // map<int, int> mp;
        // for(int i:nums)
        // mp[i]++ ;
        // int t=0;
        // for(int i:nums)
        // {
        //     if(mp[i]==1) {t=i;}
        // }
        // return t ;
        int xr=0 ;
        for(int i: nums)
            xr^= i;
        return xr;
    }
};