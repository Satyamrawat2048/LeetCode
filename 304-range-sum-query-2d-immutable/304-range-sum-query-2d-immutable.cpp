class NumMatrix {
public:
    
    // NumMatrix(vector<vector<int>>& m) {
//      matrix = m;
//     }
    
//     int sumRegion(int row1, int col1, int row2, int col2) { int sum=0;
//         for(int i=row1; i<=row2; i++)
//         {
//             for(int j=col1 ; j<=col2 ; j++)
//             {
//                 sum+= matrix[i][j] ;
//             }
//         }
//     return sum;
//     }
    vector<vector<int>  >m ;//in each row we are sotring the sum that column . 
    // final sum is that of row till final column - sum of that row before initial column.
    NumMatrix(vector<vector<int>>& matrix) {
        for(int i=0 ; i< matrix.size() ; i++)
        { 
            vector<int> row(matrix[0].size()) ;
            row[0]= matrix[i][0];

            for(int j=1 ; j< matrix[i].size(); j++)
                row[j]=row[j-1]+matrix[i][j] ;
            
            m.push_back(row);
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0 , diff = 0;
        
        for(int i =row1 ; i<= row2 ; i++)
        {
            sum+= m[i][col2] ;
            if(col1>0)
                diff+= m[i][col1-1] ;
        }
        return sum-diff ;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */