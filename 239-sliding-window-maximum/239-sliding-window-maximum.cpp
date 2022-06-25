class Solution {
public:
//     void print(queue<int> q)
// {
// 	//printing content of queue 
// 	while (!q.empty()){
// 		cout<<" "<<q.front();
// 		q.pop();
// 	}
// 	cout<<endl;
// }
//     void printp(multiset<int> p)
//     {
//           for(auto po: p)
//          cout<<po<<' ';
//      cout<<endl;
//     }
    
     vector<int> maxSlidingWindow(vector<int>&v, int k) 
    {    int n= v.size();
      vector<int> ans;
     queue<int> q;
     multiset<int> p ;
        int max; 
     
     for(int i=0 ; i<k; i++)
     {
         q.push(v[i]) ;
         p.insert(v[i]) ;
     }
     ans.push_back(*p.rbegin()) ;
     p.erase(p.find(q.front())) ;
     q.pop() ;
   
        for(int i=k ; i<n; i++ )
        {  
          q.push(v[i])  ;
         p.insert(v[i]) ;
            
         ans.push_back(*(p.rbegin()));
         p.erase(p.find(q.front())) ;
        q.pop() ;
        }
        return ans;
     }
};