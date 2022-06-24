class Solution {
public:
    
    bool isPossible(vector<int>& target) {
      priority_queue<int> pq ;
        long long sum=0 ;
        
        for(int i: target)
            sum+=i, pq.push(i);
        
        while(pq.top()!=1 )
        { int t= pq.top() ;
         pq.pop();
         
         sum-= t ;
         
         if(t<= sum||sum<1) return 0;
         t%=sum;
         sum+=t ; 
         pq.push(t? t:sum) ;
            
        }
        return 1;
    }
};