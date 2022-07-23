class Solution {
public:
    int shortestSequence(vector<int>& r, int k) {
     
        unordered_set<int> s ;
        int ans=1 ;
        
        for(int i =0 ; i<r.size(); i++)
        {
            s.insert(r[i]);
            if(s.size()==k) 
            {
                ans++;
                s.clear() ;
            }
        }
        return ans;
    }
};
