class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int c=0; 
        
        for(int i=0 ; i<words.size();i++)
        { if(words[i].size()> s.size())continue ;
         
             string st= s.substr(0,words[i].size());
           if(st== words[i]) c++;
        }
    return c;
    }
};