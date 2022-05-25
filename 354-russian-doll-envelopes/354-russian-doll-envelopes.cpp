class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b)
    {
        if(a[0]==b[0]) return a[1] > b[1];
        return a[0] < b[0];
    }
    
    int maxEnvelopes(vector<vector<int>>& es) {
        int n=es.size();
        
        sort(es.begin(),es.end(),cmp);//sort by height  & if we encounter same height sort by desc order of width
         
        // Now, we only need to care about width So, as of now we only need to look upon v[i][1]
// if we apply lower_bound i.e. first elem greater than equal to itself in lis
        
        vector<int>lis ;
       
        for(int i=0 ; i<n ;i++)
        {
           int ele=es[i][1];
            int idx= lower_bound(lis.begin(),lis.end(),ele)-lis.begin();
            
            if(idx>=lis.size()) lis.push_back(ele);
            else lis[idx]=ele ;
        }
        return lis.size();
    }
};