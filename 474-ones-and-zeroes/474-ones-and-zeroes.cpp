class Solution {
public:
    
    int sub(vector<pair<int,int>> &a, int index , int one , int zero,int dp[601][101][101])
    {
        int n = a.size();
        if(index == n or (zero ==0 and one == 0))   return 0;
        
        // if we already know answer for this index with current zero , one then no need to recompute return the saved answer
        if(dp[index][one][zero] != -1)
            return dp[index][one][zero];
        
        // we dont have available no of zeros or ones to build this curent string, so we dont have any other option but to skip this index
        if(a[index].first > one or a[index].second > zero)  
            return dp[index][one][zero] = sub(a , index+1 , one , zero,dp);
        // NOTE : we are also saving corrensponding values
        
        int include = 1 + sub(a , index+1, one - a[index].first , zero - a[index].second,dp);
        int exclude = sub(a , index+1 , one , zero,dp);
        
        // save these values and return the answer
        return dp[index][one][zero] = max(include , exclude);
    }
    
   int findMaxForm(vector<string>& strs, int z, int o) 
    {
         int dp[601][101][101] = {};
        vector<pair<int,int>> a;
        memset(dp , -1 , sizeof(dp));
        
        for(auto i : strs)
        {
            int one = 0 , zero = 0;
            for(auto j : i)
                (j == '1') ? one ++ : zero++;
            a.push_back({one , zero});
        }
        
        int ans = sub(a , 0 , o , z,dp);
        return ans;
    }
};