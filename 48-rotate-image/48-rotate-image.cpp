class Solution {
public:
// Rotate using another matrix
//     void rotate(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//        vector<vector<int>> ans(n,vector<int> (n,0));

//         int m=n ;
//         for(int i=0 ; i<n; i++)
//         {
//             for(int j=0 ; j< n  ; j++ )
//             {
//              ans[j][n-1-i] =matrix[i][j];
//             }
//         }
//        for(int i=0 ; i< ans.size(); i++)
//        {
//            for(int j=0 ; j<ans.size(); j++)
//                {
//                    matrix[i][j]=ans[i][j];
//                }
//        }
//     }
    
    //Rotate by firstly transposing matrix then reversing each row 
//         void rotate(vector<vector<int>>& a) 
//         {
//             int n= a.size();
            
//             for(int i= 0;i<n; i++ )
//                 for(int j=i+1 ; j<n ; j++)
//                  swap(a[i][j], a[j][i]);
            
//             for(int i=0 ; i< n ; i++)
//             reverse(a[i].begin(),a[i].end()) ;
//         }
    void rotate(vector<vector<int> > &matrix) {
    reverse(matrix.begin(), matrix.end());//reverse columns first 
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = i + 1; j < matrix[i].size(); ++j)
            swap(matrix[i][j], matrix[j][i]);
    }
}
};