class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int c=0; 
        
        for(int i=0 ; i<words.size();i++)
        { if(words[i].size()> s.size())continue ;
           if(s.substr(0,words[i].size())== words[i]) c++;
        }
    return c;
    }
};