class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
     bool c[4];
        	memset(c,true,sizeof(c));//vector<bool> valid_rotn(4, true);
        int n=mat.size();
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(mat[i][j]!=target[i][j]) c[0]=false;//for 0 deg rotation
			if(mat[i][j]!=target[n-j-1][i]) c[1]=false;//90deg rotation
			if(mat[i][j]!=target[n-i-1][n-j-1]) c[2]=false;//180 deg rotation
			if(mat[i][j]!=target[j][n-i-1]) c[3]=false;//270 deg rotation
		}
	}
	return c[0]||c[1]||c[2]||c[3];
    }
};