class Solution {
public:
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long success) {
    vector<int> ans;

    sort(p.begin(),p.end()) ;
        
    for(auto i:s)
    { long long d= success/i ;
      if(success%i)  d+= 1; 
     int j = lower_bound(p.begin(),p.end(),d)-p.begin() ;
     ans.push_back(p.size()-j);
    }
    return ans;
    }
};