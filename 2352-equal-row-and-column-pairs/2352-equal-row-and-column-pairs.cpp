class Solution {
public:
 
    int equalPairs(vector<vector<int>>& a) {
        
        int n =a.size(),ans=0;
        vector<vector<int>> p; 
        for(int i=0 ; i< n ; i++)
        {vector<int> v ;
            for(int j =0 ; j<n; j++)
                v.push_back(a[j][i]) ;
          p.push_back(v) ;
        }
        
        for(int i= 0 ; i< n; i++)
        {
            for(int j =0 ; j< p.size() ; j++){
                if(a[i]==p[j])ans++ ;
            }
        }
        return ans;
    }
};