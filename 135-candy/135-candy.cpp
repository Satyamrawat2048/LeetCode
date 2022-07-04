class Solution {
public:
    int candy(vector<int>& r) {
        
        int n=r.size() ; 
        vector<int >v(n,1),v2(n,1) ;
        
        bool chng=1;
        
       
        for(int i=1 ; i<n ; i++)
         if (r[i]>r[i-1] ) v[i]= v[i-1]+1;
        
        
        for(int i=n-1 ;i>0; i--)
        if(r[i]< r[i-1]) v2[i-1]=v2[i]+1 ;

        int sum= 0;
        
        for(int i=0 ; i<n; i++)
        {
            sum+= max(v[i],v2[i]);
        }
        return sum; 
    }
};