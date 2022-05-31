class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        
        map<int,string> mp ;
        string s="";
        for(int i=0 ; i< str.size(); i++)
            mp[str[i].size()]=str[i] ;

        int allcommon=INT_MAX ;
       s=mp.begin()->second ;
        
        for(int i=0; i<str.size() ; i++)
        {  int k=0 ;
           for(int j=0; j<str[i].size()&& k<s.size() ;j++)
               if(str[i][j]==s[k])k++ ;
               else break ;
           
         allcommon = min(allcommon ,k);
        }
        string ans="";
        for(int i=0 ;i< allcommon;i++)
        ans+=s[i];
        return ans ;
    }
};