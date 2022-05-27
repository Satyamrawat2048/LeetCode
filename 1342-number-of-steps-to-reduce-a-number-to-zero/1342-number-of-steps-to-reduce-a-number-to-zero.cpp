class Solution {
public:
    int numberOfSteps(int num) { 
    // int c=0 ;
    //     while(num)
    //     { num = num&1?num-- : num/2 ;
    //      c++ ;
    //     }
    //     return c ;
    // }
    
//bit manipulation
        // return num ? __builtin_popcount(num) + 31 - __builtin_clz(num) : 0;
     
    //recursive
        if(num==0|| num==1) return num ;
        return numberOfSteps(num/2)+(num%2==0?1:2); // recursive case and add 1 if num is odd else add 2
    }
    
};
