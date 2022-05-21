class Solution {
public:
    
    
    int climbStairs(int n) {
        if(n<=2) return n ;
        
        int f=1 , s=2 ,next;
        for(int i=3; i<= n ;i++)
        {
            next=f+s;
            f=s;
            s=next;
        }
        return next ;
    }
};