class Solution {
public:
    int uniquePaths(int m, int n) {
//         vector<vector<int> > v(m,vector<int>(n , 1)) ;SC(On2)
        
//         for(int i=1 ; i< m ; i++)
//             for(int j=1 ; j< n; j++)
//                 v[i][j]= v[i-1][j]+ v[i][j-1];
      
//         return v[m-1][n-1];
        
        vector<int> cur(n,1); //SC O(n)
        for(int i=1 ; i< m; i++)
            for(int j=1 ; j< n; j++)
                cur[j]+= cur[j-1];
        return cur[n-1];
    }
};