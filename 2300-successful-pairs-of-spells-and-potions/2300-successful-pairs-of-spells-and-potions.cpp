class Solution {
public:
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long success) {
    int ns=s.size(), ps=p.size() ;
    vector<int> ans(ns,INT_MIN) ;

    sort(p.begin(),p.end()) ;
    for(int i=0 ; i<ns;i++ )
    {  if(s[i]>=success) {ans[i]=ps; continue;}
       
      if((long long)s[i]*p[ps-1]< success){ ans[i]=0 ;continue; }
      
      long need = (success +s[i]-1)/s[i] ;
      auto it= lower_bound(p.begin(),p.end(),need);
      ans[i] = p.end()-it ;
      ans[i]= max(ans[i],0);
    }
    return ans;
    }
};