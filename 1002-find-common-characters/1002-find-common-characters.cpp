class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> h1(26,0) , h2(26,0) ;
        
        for(auto ch: words[0]) h1[ch-'a']++;
        
        for(int i=1 ; i< words.size(); i++)
        {
            for(auto ch: words[i])
            {
                h2[ch-'a']++;
            }
            
            for(int i=0 ; i< 26 ; i++)
            {
                h1[i]= min(h1[i] , h2[i]) ;
                h2[i]=0 ;
            }
        }
        vector<string> ans ;
        for(int i=0 ; i<26 ;i++ )
        {
            if(h1[i]>0){
                int count= h1[i] ;
                while(count--)
                {char c=i+'a' ;
                string s=""; s= c ;
                ans.push_back(s);
                }
            }
        }
        return  ans ;
    }
};