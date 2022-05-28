class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& r) {
        long long ans =0 ,x=1 ;
        
        vector<int> freq(n,0);
        
        for(int i=0 ; i< r.size(); i++)
        {
            freq[r[i][0]]++ ;
            freq[r[i][1]]++ ;
        }
        
        sort(freq.begin(),freq.end());
        
        
        for(int i=0 ; i<freq.size(); i++)
         ans+= freq[i]*x++ ;
        
        return ans ;
    }
};