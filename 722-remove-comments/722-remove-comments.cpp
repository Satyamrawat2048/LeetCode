class Solution {
public:
//     vector<string> removeComments(vector<string>& s) {
//         vector<string> ans; 
//         string str ="";
//         int n = s.size();
//         bool comment= false;
//         for(int i=0 ; i<n ; i++)
//         { 
//             for(int j=0 ; j<s[i].size() ; j++)
//             { if(!comment && j<s[i].size()&& s[i][j]=='/' && s[i][j+1]=='/') break;
              
//              else if(!comment && j<s[i].size()&& s[i][j]=='/' && s[i][j+1]=='*') comment=true, j++;
             
//              else if(comment && j<s[i].size() && s[i][j]=='*' && s[i][j+1]=='/') comment = false ,j++ ;
             
//              else if(!comment) str.push_back(s[i][j]) ;
//             }
//          if(!comment && str.size()) 
//          ans.push_back(str), str.clear();
//         }
//         return ans ;
//     }
    
        vector<string> removeComments(vector<string>& str) {
            vector<string > ans ; string s ;
            bool comment =false ;
            
            for(string l : str)
            {
                for( int i=0 ; i< l.size(); i++)
                {
                    string two = l.substr(i,2);
                    if(!comment)
                    {   if(two=="//") break;
                        else if(two=="/*") comment= true, i++;
                       else s.push_back(l[i]) ;
                    }
                    else if(two=="*/") comment= false, i++;
                }
         if(!comment && s.size()) ans.push_back(s) , s.clear();
            }
            return ans ;
        }

    
};