class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int ec) {
     
        vector<bool> ans; 
        int maxi= *max_element(c.begin(),c.end()) ;
        for(int i=0 ; i<c.size();i++)
        { 
           ans.push_back(maxi<= c[i]+ec ? true : false );
        }
        return ans; 
    }
};