class Solution {
public:
    int longestConsecutive(vector<int>& a) {
//         if(a.size()==0) return 0; //sorting O(n)
        
//         int n = a.size(), c=1, maxc=1  ;
//         sort(a.begin(),a.end()) ;
        
//         for(int i=1 ; i<n; i++)
//         {
//          if(a[i] ==a[i-1]+1) c++ ;
//         else if(a[i]==a[i-1]) continue ;
//           else c= 1;
//           maxc= max(maxc,c) ;
//         }
//         return maxc;
        
        //set O(n) 
        set<int> s;
        
        int n = a.size() ;
        if(n<2) return n; 
        
        for(int i=0 ;i<n ;i++)  s.insert(a[i]) ;
        int c=0 ,maxc=0;
        int prev= *s.begin();
        
        for(auto i: s)
        { if(i==prev+1) c++ ;
         else c=1 ;
         prev= i;
         maxc= max(maxc,c);
        }
        return maxc;
    }
};