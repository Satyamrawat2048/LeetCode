class Solution {
public:
    
    bool issub(string w,string s)
    {  int j=0 , k=0 ;

         int wl= w.size(),sl=s.size() ;
         while(j<wl && k< sl)
         {
             if(w[j]==s[k]){j++; k++; }
         else k++ ;
         
          }
        if(j==wl) return 1 ;
     return 0;
        
    }
    
    int numMatchingSubseq(string s, vector<string>& w) {
        int i=0 , c=0 ; 
        
        unordered_map<string,int> mp ;
        
        for(int i=0 ; i< w.size(); i++) mp[w[i]]++ ;
        
        for(auto it: mp) 
        {
            if(issub(it.first,s)) c+=it.second ;
        }
        return c;
    }
};