class Solution {
public:
   int maxScore(vector<int>& card, int k) {
        int n = card.size();
        int ans=0 ;
        vector<int> pre(n+1,0),suf(n+1,0) ;
        for(int i=1; i<n+1 ; i++)
            pre[i]= pre[i-1]+ card[i-1] ;

        for(int i=n-1; i>=0 ; i--)
            suf[i]= suf[i+1]+ card[i] ;

        reverse(suf.begin(),suf.end()) ;

         ans =0; 
       
        for(int i=0 ; i<= k; i++)
        { //cout<<pre[i]<<' '<< suf[k-i]<<endl ;
            ans = max(ans, pre[i]+suf[k-i]);}
        // for(int i:suf)
        //     cout<<i<<' ';
        //     cout<<endl;
        //  for(int i:pre)
        //     cout<<i<<' ';
        return ans; 
    }
};