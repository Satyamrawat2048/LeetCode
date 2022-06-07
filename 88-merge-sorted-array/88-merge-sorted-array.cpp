class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
//     vector<int> v(m+n); notinplace
//         int i=0 , j=0 , k=0;
        
//         while(i<m && j< n)
//         {
//             if(a[i]> b[j]) v[k]= b[j] , k++, j++ ;
//             else v[k]= a[i] , k++, i++ ;
//         }
//         while(i<m)
//        v[k]= a[i] , k++, i++ ;
        
//         while(j<n) 
//         v[k]= b[j] , k++, j++ ;
        
//         a= v ;   
        
        //inplace
        int i=m-1 , j=n-1 , k=m+n-1 ;
        
        while( j>=0 )
        {  if(i>=0 &&a[i] > b[j])  a[k]=a[i], k-- ,i--;
           else  a[k]= b[j] , k--, j--;
        }
    }
};