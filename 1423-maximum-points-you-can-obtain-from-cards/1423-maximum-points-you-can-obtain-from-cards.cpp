class Solution {
public:
//     int maxScore(vector<int>& card, int k) {
//         int n = card.size();
//         int sum=0 ;
//         vector<int> pre(n),suf(n) ;
//         pre[0]=card[0], suf[n-1]=card[n-1];
       
//         for(int i=1; i<n ; i++)
//         {
//             pre[i]= pre[i-1]+ card[i] ;
//         }
//         for(int i=n-2; i>=0 ; i++)
//         {
//             suf[i]= suf[i+1]+ card[i] ;
//         }
//         for(int i:suf)
//             cout<<i<<' ';
//         return sum; 
//     }
     int maxScore(vector<int>& cardPoints, int k) {
        int res=0, n=cardPoints.size(), s=0;
        for(int i=n-k; i<n;i++) res+=cardPoints[i];
        for(int i=0, s=res;i<k;i++) {
            s-=cardPoints[n-k+i];
            s+=cardPoints[i];
            res=max(res,s);
        }
        return res;
    }
};