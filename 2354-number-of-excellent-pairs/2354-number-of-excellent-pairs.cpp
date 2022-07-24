class Solution {
public:
    long long countExcellentPairs(vector<int>& a, int k) {
        unordered_set<int> s; 
        long long res =0,c[30]={};
        for(int i: a) s.insert(i);
        
        for(int i: s) ++c[__builtin_popcount(i)] ;
        
        for(int i=1; i<30 ; i++)
        {  for(int j=1 ; j< 30 ; j++ )
                if(i+j>= k) res+= c[i]*c[j] ;
        }
        return res; }
};