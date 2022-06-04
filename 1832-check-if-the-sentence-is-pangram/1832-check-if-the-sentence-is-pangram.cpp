class Solution {
public:
    bool checkIfPangram(string str) {
        map<char, int> mp;
        
        for(int i=0 ; i< str.size();i++)
        { mp[str[i]]++ ;
        }
        
        char c='a';
        
        for(int i=0 ; c<='z'; )
        { 
            if(mp[c]<=0)return false ;
            c++;
        }
        return true ;
    }
};