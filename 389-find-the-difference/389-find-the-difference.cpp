class Solution {
public:
    // char findTheDifference(string s, string t) { O(nlogn)
    //     sort(s.begin(),s.end());  sort(t.begin(),t.end());
    //     int i=0;
    //     for( i= 0 ; i< t.size()&& i< s.size();i++)
    //     {
    //         if(t[i]!=s[i])return t[i] ;
    //     }
    //     return t[i];
    // }
    
        char findTheDifference(string s, string t) //O(n)
        { 
            char c=0 ;
            
            for(int i=0 ; i< s.size(); i++)c^= s[i];
            for(int i=0 ; i< t.size(); i++) c^=t[i];
            return c;            
        }
};