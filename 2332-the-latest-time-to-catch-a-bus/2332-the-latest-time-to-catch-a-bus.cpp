class Solution {
public:
    int latestTimeCatchTheBus(vector<int>& b, vector<int>& p, int cap) {
        int bn=b.size() ,pn=p.size() ;
        int ans=0;
        sort(b.begin(), b.end()) ;
        sort(p.begin(),p.end()) ;
     unordered_set<int> st;
        for(auto pi:p)
            st.insert(pi);

        int j=0;
       
        for(int i=0 ;i<bn ; i++)
        { int curr = b[i] ;
             int c=0,x;
         
         while(j<pn && c< cap&& p[j]<=curr)
         {
             x= p[j] ; 
             j++ ;
             
             if(st.find(x-1)==st.end()) ans =x-1 ;//checking if person timing-1 doesnt exist and update the answer
             c++ ;
         }
         if(c<cap){
             while(st.find(curr)!= st.end())//starting from dept time find a time which does not exist int the set already
              curr-- ;               
             ans= max(ans,curr) ;
         }
            
        }
        return ans;
    }
};