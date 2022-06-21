class Solution {
public:
         int furthestBuilding(vector<int>& a, int bricks, int ladders) {//we will use bricks if ladders are not enough
        priority_queue<int> pq;
        
        for(int i=1 ; i< a.size(); i++)
        {
            if(a[i]-a[i-1]> 0)
            pq.push(-(a[i]-a[i-1])) ;
            
            if(ladders<pq.size())
            {
                bricks+= pq.top() ;
                pq.pop();
            }
            if(bricks<0) 
            { 
                return i-1 ;}
        }
       return a.size()-1 ;
    }
};