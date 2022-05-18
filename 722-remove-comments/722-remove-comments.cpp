class Solution {
public:
    vector<string> removeComments(vector<string>& s) {
        vector<string> ans; 
        string str ="";
        int n = s.size();
        bool comment= false;
        for(int i=0 ; i<n ; i++)
        { 
            for(int j=0 ; j<s[i].size() ; j++)
            { if(!comment && j<s[i].size()&& s[i][j]=='/' && s[i][j+1]=='/') break;
              
             else if(!comment && j<s[i].size()&& s[i][j]=='/' && s[i][j+1]=='*') comment=true, j++;
             
             else if(comment && j<s[i].size() && s[i][j]=='*' && s[i][j+1]=='/') comment = false ,j++ ;
             
             else if(!comment) str.push_back(s[i][j]) ;
            }
         if(!comment && str.size()) 
         ans.push_back(str), str.clear();
        }
        return ans ;
    }
    
};