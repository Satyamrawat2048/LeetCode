class Solution {
public:
    int wordCount(vector<string>& start, vector<string>& target) {
        unordered_map<string, int> mp;
        
        for(int i =0 ; i< target.size(); i++)
        {
            sort(target[i].begin(), target[i].end());
            mp[target[i]]++ ;
        }
        int ans=0 ; 
        
        for(int i=0 ; i< start.size(); i++)
        {
            int arr[26]={0} ;
            
            for(int j = 0; j<start[i].size(); j++)
                arr[start[i][j]-'a']++;

            for(int j=0 ; j<26 ; j++ )
            {
                string s= start[i] ;
                if(arr[j]==0)
                {
                    s+='a'+j ;
                    sort(s.begin(), s.end()) ;
                    if(mp.find(s)!= mp.end())
                    {
                        ans+= mp[s]; 
                        mp.erase(s);
                    }
                }
            }
        }
        return ans;
    }
};