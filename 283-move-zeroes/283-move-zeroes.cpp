class Solution {
public:
    void moveZeroes(vector<int>& a) {
    //using another arr
//         int i=0,c=0,n=a.size();
       
//         for(int i:a) 
//             c+= (i==0);
        
//         vector<int> ans ;
        
//         for(int i=0 ; i< n; i++)
//             if(a[i]!=0) ans.push_back(a[i]);
        
//         while(c--) 
//             ans.push_back(0);
        
//         for(int i=0 ; i< n; i++)
//             a[i]=ans[i];    
        
        // M2
//         int lastzero =0;
        
//         for(int i=0 ; i< a.size();i++)
//         {
//             if(a[i]!=0)a[lastzero++]=a[i];
//         }
//         for(int i=lastzero; i< a.size();i++)
//             a[i]=0;
        for(int lastzero=0  , i=0 ; i<a.size(); i++)
         if(a[i]!=0)swap(a[lastzero++],a[i]);
    }
};