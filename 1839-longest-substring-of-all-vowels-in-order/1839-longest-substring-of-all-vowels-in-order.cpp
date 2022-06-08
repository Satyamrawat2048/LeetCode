class Solution {
public:
        int longestBeautifulSubstring(string word) {
        char prev=48 ;
        
        if(word.size()<5) return 0;
        int c=0 ,maxi=0;
        for(int i=0 ;i<word.size()-4; i++)
        {  //prev=='a'? c=0:c=0 ;
            c=0;
            if(word[i]=='a'|| prev=='a')
            {       
                prev= word[i]; 
                i++ ;c++ ;
                while(i<word.size())
                {   
                    if(word[i]==prev|| word[i]==prev+4|| word[i]==prev+6)
                    {prev=word[i];
                        c++ ,i++;
                    }
                    else {prev=word[i];break ;}
                }
            }
             // cout<<c << ' '<<prev <<endl;
         if(i && word[i-1]!='u')c=0;
           if(prev=='a') i-- ;

         maxi= max(maxi,c);
        }
        return maxi;
    }
};