class Solution {
public:   
    bool check(string& s1, string& s2, string& s3) {
        int m = s1.length();
        int n = s2.length();
        int N = s3.length();
        if(m + n != N)
            return false;
        
        int t[m+1][n+1];
        //t[i][j] = true; //means, s1[0..i] and s2[0...j] interleaves with s3 till (i+j)
        
        //length of s1 = 0, s2 = 0 and s3 = 0 + 0, i.e. 0 . So obviously it's interleaved :-)
        t[0][0] = true;
        
        //When s1 is of 0 length, we can interleave only when s2 forms s3
        for(int j = 1; j<n+1; j++) {
            t[0][j] = t[0][j-1] && s2[j-1]==s3[j-1];
        }
        
        //When s2 is of 0 length, we can interleave only if s1 forms s3
        for(int i = 1; i<m+1; i++) {
            t[i][0] = t[i-1][0] && s1[i-1]==s3[i-1];
        }
        
        
        for(int i = 1; i<m+1; i++) {
            for(int j = 1; j<n+1; j++) {
                int k = i + j - 1;
                
                bool s1_equals_s3  = t[i-1][j] && s1[i-1] == s3[k]; //Try with s1
                
                bool s2_equals_s3  = t[i][j-1] && s2[j-1] == s3[k]; //Try with s2
                
                t[i][j] = s1_equals_s3 || s2_equals_s3 ;
            }
        }
        
        return t[m][n];
    }
    
    bool isInterleave(string s1, string s2, string s3) {
        return check(s1, s2, s3);
    }
};