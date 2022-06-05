class Solution {
public:
void solve(int col,int&c ,vector<string>&board,vector<vector<string>>&ans,vector<int>&left,vector<int>&upper,vector<int>&lower, int n)
    {
        if(col==n)
        { c++ ;
        }
        for(int row=0;row<n ; row++)
        {
            if(left[row]==0 &&lower[row+col]==0 &&upper[n-1+col-row]==0)
            {
                board[row][col]='Q';
                left[row]=1 ;
                lower[row+col]=1 ;
                upper[n-1+col-row]=1 ;
                
                solve(col+1,c,board,ans,left,upper,lower,n) ;
                board[row][col]='.';
                left[row]=0;
                lower[row+col]=0;
                upper[n-1+col-row]=0;
            }
        }
    }

    int totalNQueens(int n) 
    {
      vector<vector<string>> ans ;
        vector<string> board(n);
        string s(n,'.'); int c=0 ;
        
        for(int i=0  ; i< n; i++)
        {
            board[i]=s ;
        }
       vector<int> left(n,0),upperdiag(2*n-1,0),lowerdiag(2*n-1,0) ;

        solve(0,c,board,ans,left,upperdiag,lowerdiag,n);
        return c ;
    }
};