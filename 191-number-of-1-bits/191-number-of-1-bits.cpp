class Solution {
public:
    int hammingWeight(uint32_t n) {
        // return __builtin_popcount(n);
        int c=0 ;
        
        for(int i=0; i<32;i++)
        {
        n>>i &1 ? c++:0 ;
        }
        return c ;
    }
};