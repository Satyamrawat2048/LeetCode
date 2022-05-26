class Solution {
public:
    int hammingWeight(uint32_t n) {
// return __builtin_popcount(n);
//   using right shift
 // int c=0 ;
        
//         for(int i=0; i<32;i++)
//         {
//         n>>i &1 ? c++:0 ;
//         }
//         return c ;
        
        int c=0;  
        while(n>0)
        { 
			++c;
            n=n&(n-1); 
        }
        return c;
    }
};