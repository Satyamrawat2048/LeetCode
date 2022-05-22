class Solution {
public:
//     float roundoff(float item, int c)
// {
//   float p10 = pow(10.0f, c);
//   return round(item * p10) /p10;
// }
    
    int minimumLines(vector<vector<int>>& sp) {
        int n = sp.size(),c=1;

                if(n<=1) return 0;

        sort(sp.begin(),sp.end());
        for(int i=1 ; i<n -1; i++)
        {
            long double x1= sp[i-1][0];
            long double y1= sp[i-1][1];
            
       long double x2= sp[i][0];
       long double y2= sp[i][1];
            
        long double x3= sp[i+1][0];
       long double y3= sp[i+1][1];

            long double a= (long double)(y2-y1)/(x2-x1 ) ;
            long double b= (long double)(y3-y2)/(x3-x2 ) ;

            if(a!=b)c++ ;
        }
       return c;
    }
};