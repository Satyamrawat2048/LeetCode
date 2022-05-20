class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& m) {
      
        int r= m.size();
        int c= m[0].size();
       if(m[0][0]==1) return 0 ; 
        m[0][0]=1 ;
        
        // Number of ways of reaching the starting cell = 1.
        for(int i=1; i<r ; i++) m[i][0]= (m[i][0]==0 && m[i-1][0]==1)?1:0 ;
          // Filling the values for the first column      
        for(int i=1; i<c; i++) m[0][i]= (m[0][i]==0 && m[0][i-1]==1 )? 1:0 ;
        
        for(int i=1 ; i< r ; i++)
        {
            for(int j=1; j<c; j++)
            {
                if(m[i][j]==0) m[i][j]=m[i-1][j]+ m[i][j-1] ;
                else m[i][j]=0;
            }
        }
        return m[r-1][c-1];
    }
};