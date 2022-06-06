class Solution {
public:
    bool closeStrings(string w1, string w2) {
        if(w1.size()!= w2.size()) return false; 
        vector<int> f1(26) , f2(26) ;
        
        for(auto i =0 ; i<w1.size();i++)
          { ++f1[w1[i]-'a'] ;
           ++f2[w2[i]-'a'] ;}
        
        
        
        if(!equal(f1.begin(),f1.end(),f2.begin(),f2.end(),[](int a, int b) { return (bool)a == bool(b); }))return false ;
        sort(f1.begin(),f1.end());
        sort(f2.begin(),f2.end());
       return f1==f2;
    }
};