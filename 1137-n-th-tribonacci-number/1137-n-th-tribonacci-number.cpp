class Solution {
    long arr[38]={0};
public:
    
    int tribonacci(int n) {
        //memoisation O(n)
       // if(n<2) return n; 
       //  if(n==2) return 1;
       //  if(arr[n]!=0) return arr[n];
       //  return arr[n] =tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        
        //dp
        int dp[3]= {0,1,1};
        for(int i=3; i<= n ; i++)
            dp[i%3]+= dp[(i+1)%3] + dp[(i+2)%3];
        return dp[n%3];
        
    }
};