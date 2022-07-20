class Solution {
public:
//     bool issub(string w,string s)
//     {  int j=0 , k=0 ;
//          int wl= w.size(),sl=s.size() ;
//          while(j<wl && k< sl)
//          {
//              if(w[j]==s[k]){j++; k++; }
//          else k++ ;
         
//           }
//         if(j==wl) return 1 ;
//      return 0;
//     }
    
//     int numMatchingSubseq(string s, vector<string>& w) {
//         int i=0 , c=0 ; 
//         unordered_map<string,int> mp ;
        
//         for(int i=0 ; i< w.size(); i++) mp[w[i]]++ ;
        
//         for(auto it: mp) 
//             if(issub(it.first,s)) c+=it.second ;
//         return c;
//     }
    int numMatchingSubseq(string& s, vector<string>& words) {
        int ans = 0;
        
        vector<vector<int>> mappings(26);  // stores array of indices for each character in s
        
        for(int i = 0; i < size(s); i++) mappings[s[i] - 'a'].push_back(i);
        
        for(auto& word : words) {
            bool found = true;
            // i = index in word | prev = index in s matched for word[i-1]
            for(int i = 0, prev = -1; found && i < word.size(); i++) {
                auto& v = mappings[word[i]-'a'];
                auto it = upper_bound(begin(v), end(v), prev);   // check if current character exists in s with index > prev
                if(it == end(v)) found = false;                  // doesn't exist
                else prev = *it;                                 // update prev for next check
            }
            ans += found;
        }
        return ans;
    }
};