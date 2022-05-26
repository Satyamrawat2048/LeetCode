class Solution {
public:
    bool isPowerOfTwo(int n) {
        // if(n<=0)return false;
        // return !(n& n-1);
        //iterative
        if(n==0) return false;
        while(n%2==0) n/=2 ;
        return n==1 ;
    }
};