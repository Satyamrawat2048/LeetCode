class Solution {
public:
         vector<int> maxSlidingWindow(vector<int>&v, int k) {
//     {    int n= v.size();
//       vector<int> ans;
//      queue<int> q;
//      multiset<int> p ;
     
//      for(int i=0 ; i<k; i++)
//      {
//          q.push(v[i]) ; p.insert(v[i]) ;
//      }
//      ans.push_back(*p.rbegin()) ;
//      p.erase(p.find(q.front())) ; q.pop() ;
   
//         for(int i=k ; i<n; i++ )
//         {  
//           q.push(v[i])  ; p.insert(v[i]) ;
            
//          ans.push_back(*(p.rbegin())); 
//          p.erase(p.find(q.front())) ;  q.pop() ;
//         }
//         return ans;
  int n= v.size();
    vector<int> result;
    deque<int> w;
    
    for (int i = 0;  i < n; i++) {
        
        while (!w.empty() && w.front() <= i-k)
            w.pop_front();
        
        while (!w.empty() && v[w.back()] <= v[i])
            w.pop_back();
        
        w.push_back(i);
        
        if (i >= k-1)
            result.push_back(v[w.front()]);
    }
    return result;
     }
};