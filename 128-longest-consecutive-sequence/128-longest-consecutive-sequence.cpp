class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        if(a.size()==0) return 0;
        
        int n = a.size(), c=1, maxc=1  ;
        sort(a.begin(),a.end()) ;
        
        for(int i=1 ; i<n; i++)
        {
         if(a[i] ==a[i-1]+1) c++ ;
        else if(a[i]==a[i-1]) continue ;
          else c= 1;
          maxc= max(maxc,c) ;
        }
        return maxc;
    }
};