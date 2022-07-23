class Solution {
public:
    bool isvalid(vector<vector<char>>& board,int r, int c, char val)
    {
        for(int i=0 ; i<9 ;i++)
        {if(board[i][c]==val)  return 0; 
         
         if(board[r][i]==val)  return 0; 
         
         if(board[3*(r/3)+i/3][3*(c/3)+i%3]==val) return 0;
        }
         return 1; 
    }
    
    bool solve(vector<vector<char>> &board)
    {int n = board.size() ;
     
        for(int i=0 ; i<n;i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                if(board[i][j]=='.'){
                
                    for(char c='1' ; c<='9' ; c++){
                        if(isvalid(board,i,j,c)){board[i][j]=c;
                        if(solve(board)==1)
                            return 1;
                        board[i][j]= '.' ;
                        }
                    }
                    return 0;
                }
            }
        }
     return 1; 
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};