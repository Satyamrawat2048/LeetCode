class Solution {
public:
    string reverseWords(string w) {
        string s,ans="" ;
               
        
        for(int i=0 ; i< w.size();i++)
        {
            if(w[i]==' '){ 
                reverse(s.begin(),s.end()) ;
                  ans+=s ;  ans+= " ";
                          s="";  }
            else s+= w[i] ; 
        }
      reverse(s.begin(),s.end()) ;

        return ans+s;
    }
};