class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());  sort(t.begin(),t.end());
        int i=0;
        for( i= 0 ; i< t.size()&& i< s.size();i++)
        {
            if(t[i]!=s[i])return t[i] ;
        }
        return t[i];

        return 1;
    }
};