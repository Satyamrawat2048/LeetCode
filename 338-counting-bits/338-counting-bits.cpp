class Solution {
public:
    
    vector<int> countBits(int n) {
        if(n==0) return {0};
        vector<int> ans ;
        for(int i=0 ; i<=n; i++)
        {  int c=0,j=i;
            while(j>=1)
            {
            j%2? c++:0 ;
                j=j/2 ;
            }
         
          ans.push_back(c);
        }
        return ans ;
    }
};