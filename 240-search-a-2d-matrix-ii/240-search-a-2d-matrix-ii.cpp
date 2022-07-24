class Solution {
public:
    bool binsearch(int lb, int ub, vector<int>& a, int target)
    {  int l=lb , u= ub-1;

        
        while(l<=u)        
        { int mid= (l+u)/2 ;
         if(a[mid]==target) return 1; 
         else if(a[mid]<target) l=mid+1;
         else u= mid-1 ;          
        }
        return 0; 
    }
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int n= m.size(), n1= m[0].size();
        cout<<n<<' '<<n1; 
        if(n==1 && n1==1)
        if(m[0][0]==target) return 1; else return 0;
        
        int i=0 , j=0 ;
        
        for(int i=n-1 ; i>-1 ; i--)
        {  
            if(target==m[i][0]) return 1;
            if(target>m[i][0])
            { if(binsearch(0,n1,m[i] , target)) return 1;
            }
        }
        return 0;    }
};