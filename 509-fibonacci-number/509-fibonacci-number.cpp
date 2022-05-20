class Solution {
public:
    int fib(int n) {
       // if(n<2) return n ; O(2^n)
       //  return fib(n-1) + fib(n-2) ;
        
        //O(n) using memoization
        
        if(n<2) return n;
        int m[n+1] ;
        m[0]=0;
        m[1]=1; 
        for(int i=2;  i<= n ; i++)
            m[i]=m[i-1]+m[i-2];
        return m[n];    
    }
};