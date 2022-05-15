class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int ec) {
     
        vector<bool> ans; 
        
        for(int i=0 ; i<c.size();i++)
        { 
           c[i]+= ec;
            
            int maxi= *max_element(c.begin(),c.end()) ;
            
           ans.push_back(maxi<= c[i] ? true : false );
         c[i] -=ec ;
        }
        return ans; 
    }
};