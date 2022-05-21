class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
        vector<int> ans;
        sort(a.begin(),a.end());
        for(int i=0 ; i< a.size()-1 ; i++)
        {
            if(a[i]!=a[i+1]) continue ;
            ans.push_back(a[i]) ;
            i++;
        }
        return ans;
    }
};