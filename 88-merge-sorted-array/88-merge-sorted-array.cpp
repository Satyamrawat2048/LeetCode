class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
    vector<int> v(m+n);
        int i=0 , j=0 , k=0;
        
        while(i<m && j< n)
        {
            if(a[i]> b[j]) v[k]= b[j] , k++, j++ ;
            else v[k]= a[i] , k++, i++ ;
        }
        while(i<m)
       v[k]= a[i] , k++, i++ ;
        
        while(j<n) 
        v[k]= b[j] , k++, j++ ;
        
        a= v ;        
    }
};