class Solution {
public:
    //bottom up dp
    // int minCostClimbingStairs(vector<int>& cost) {
    //     int n = cost.size();
    //     vector<int> dp(n + 1);  // dp[i] is minimum cost to reach to i_th floor
    //     for (int i = 2; i <= n; i++) {
    //         int jumpOneStep = dp[i - 1] + cost[i - 1];  // Minimum cost if we jump 1 step from floor (i-1)_th to i_th floor
    //         int jumpTwoStep = dp[i - 2] + cost[i - 2];  // Minimum cost if we jump 2 steps from floor (i-2)_th to i_th floor
    //         dp[i] = min(jumpOneStep, jumpTwoStep);
    //     }
    //     return dp[n];
    
    //bottom up dp with O(1) SC
//     int minCostClimbingStairs(vector<int>& cost) {
//     int n= cost.size();
//     int a=0, b=0 , c=0 ;
        
//     for(int i=2  ; i<=n; i++)
//     {
//         int jumpone= b+cost[i-1];
//         int jumptwo= c+ cost[i-2];
//         a= min(jumpone, jumptwo );
//         c=b ;
//         b=a ;
//     }
//         return b;
//     }
    //Memoization o(n)
    vector<int> memo ;
    int minCostClimbingStairs(vector<int>& cost) {
        // memoization + recn topvto down  as we are going from n to 0
        int n = cost.size();
        memo.resize(n,0);
        return min(calcost(cost,n-1), calcost(cost,n-2));
    }
    int calcost(vector<int> &cost,int n)
    {
        if(n<0) return 0;
        if(n==1|| n==0) return  cost[n];
        if(memo[n]!=0) return memo[n];
        memo[n]=cost[n]+ min(calcost(cost,n-1),calcost(cost,n-2));
        return memo[n];
    }
};