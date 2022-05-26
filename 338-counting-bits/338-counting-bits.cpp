class Solution {
public:
    
    vector<int> countBits(int n) {
//         o(nlogn)
//         if(n==0) return {0};
//         vector<int> ans ;
//         for(int i=0 ; i<=n; i++)
//         {  int c=0,j=i;
//             while(j>=1)
//             {
//             j%2? c++:0 ;
//                 j=j/2 ;
//             }
         
//           ans.push_back(c);
//         }
//         return ans ;
        
        //o(n)
        
        vector<int> v(n+1); 
        
        for(int i=1;i<=n ;i++)
            v[i]=v[i/2] +i%2 ;
        
        return v;
    }
};