class Solution {
public:

     vector<int> maxSlidingWindow(vector<int>&v, int k) 
    {    int n= v.size();
      vector<int> ans;
     queue<int> q;
     multiset<int> p ;
     
     for(int i=0 ; i<k; i++)
     {
         q.push(v[i]) ; p.insert(v[i]) ;
     }
     ans.push_back(*p.rbegin()) ;
     p.erase(p.find(q.front())) ; q.pop() ;
   
        for(int i=k ; i<n; i++ )
        {  
          q.push(v[i])  ; p.insert(v[i]) ;
            
         ans.push_back(*(p.rbegin())); 
         p.erase(p.find(q.front())) ;  q.pop() ;
        }
        return ans;
     }
};