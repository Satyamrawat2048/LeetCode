class Solution {
public:
    bool isvowel(char ch) 
        { 
          return (ch == 'a') || (ch == 'e') ||(ch == 'i') ||(ch == 'o') ||(ch == 'u');
        }
    
    int countVowelSubstrings(string word) {
        
        int c=0;
        if(word.size()<5) return 0;
        for(int i=0 ; i< word.size()-4;i++)
        { set<char> st ;
            for(int j=i ;j<word.size();j++)
            {  if(isvowel(word[j]))
                {st.insert(word[j]) ;
                
             if(st.size()==5) c++ ;}
                else break ;

            }
        }
    return c;
    }
};