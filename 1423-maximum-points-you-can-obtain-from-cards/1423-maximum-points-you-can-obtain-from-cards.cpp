//    int maxScore(vector<int>& card, int k) {
//         int n = card.size(),ans=0 ;
//         vector<int> pre(n+1,0),suf(n+1,0) ;
//         for(int i=1; i<n+1 ; i++)            pre[i]= pre[i-1]+ card[i-1] ;

//         for(int i=n-1; i>=0 ; i--)  suf[i]= suf[i+1]+ card[i] ;

//         reverse(suf.begin(),suf.end()) ;

//         for(int i=0 ; i<= k; i++)
//             ans = max(ans, pre[i]+suf[k-i]);
       
//         return ans; 
//     }

class Solution
{ // see sgallivan soln for hint
    public : int maxScore(vector<int>&c, int k)
    {  int ans=0 , maxi=0; 
        for(int i=0 ; i<k;i++)
            ans+=c[i] ;
        maxi=ans ;
        for(int i=k-1 ,j=c.size()-1  ; i>=0; i--,j--)
            ans+=c[j]-c[i], maxi=max(maxi,ans);
        return maxi;
    }
};