class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int c= 0, maxi =0 ; if only alphabets were present wrong soln
        // vector<int> v(26, 0); 
        // for(int i=0 ; i<s.size();i++)
        // {   if(v[s[i]-'a']<1 ) {v[s[i]-'a']++ ;c++;
        //                        }
        //    else 
        //    {   maxi= max(maxi,c);
        //        v.clear();
        //        v[s[i]-'a']++ ;
        //        c=1;
        //    }
        // }
        // return max(maxi ,c);
        
//         vector<int> freq(256, -1);
        
//         int maxLen = 0, start = -1;
//         for (int i = 0; i < s.length(); i++) {
//             if (freq[s[i]] > start)
//                 start = freq[s[i]];
            
//             freq[s[i]] = i;
//             maxLen = max(maxLen, i - start);
//         }
//         return maxLen;
        
         if( s == "") { return 0; }
        
        map<char, int> freq;       
        
        int longest = 1;
        int j = 0;
        
        for (int i = 0; i < s.length(); ++i)
        {
            if ( freq.find(s[i]) != freq.end() )
            {
                j = j >= freq.find(s[i])->second + 1 ? j : freq.find(s[i])->second + 1;
            }
            freq[s[i]] = i;
            longest = longest >= i - j + 1 ? longest : i - j + 1;
        }
        
        return longest;
    }
};