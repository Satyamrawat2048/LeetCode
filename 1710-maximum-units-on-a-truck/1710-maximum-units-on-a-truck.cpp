class Solution {
public:
    static bool cmp(vector<int> a, vector<int> b)
    {
        return a[1]>b[1] ;
    }
    int maximumUnits(vector<vector<int>>& bt, int ts) {
    int c= 0,n= bt.size() ;
        
        sort(bt.begin(),bt.end(),cmp);
        
       for(int i=0 ; i<n ; i++)
           { int t=min(ts,bt[i][0]);
             c+= t*bt[i][1];
             ts-= t;
           }
        return c;
    }
};