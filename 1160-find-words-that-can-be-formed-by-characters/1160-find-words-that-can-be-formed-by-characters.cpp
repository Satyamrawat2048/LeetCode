class Solution {
public:
    int countCharacters(vector<string>& w, string s) {
        map<char ,int> mps ;
        int c=0 ;
        bool f ;
        for(int i=0; i< s.size(); i++)
            mps[s[i]]++ ;
        
        for(int i=0 ; i< w.size();i++ )
        { map<char ,int> mp ;
           f=1 ;
         for(int j=0 ; j< w[i].size();j++)
            mp[w[i][j]]++ ;
         
         for(auto j= mp.begin();j!= mp.end() ; j++)
         { 
             if(j->second > mps[j->first]) {f=0 ;break;}
         }
          if(f) c+= w[i].size();
        }
        return c;
    }
};