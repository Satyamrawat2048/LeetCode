// class Solution {
// public:
    // vector<int> platesBetweenCandles(string s, vector<vector<int>>& q) {
//         bool candle=false ; O(n2)
//         int i=0 ;
//         vector<int> res(queries.size(),0) ;
//         for(int i=0 ; i< queries.size(); i++)
//           { int c= 0, candle =false ;
//             int s= queries[i][0] , e= queries[i][1];

           
//            for(int j= s; j<= e && j<st.size();  j++)
//            { if(!candle && st[j]=='|') candle =true ;
//             else if(candle && st[j]=='*') c++ ;
//              else if(candle && st[j]=='|') 
//              {    
//                  res[i]+= c ;
//                  c=0 ;
//              }
//            }
//           }
//    return res; 
        //O(n)
//     int n=s.size(), c=0 ,tot=0 ;
//     vector<int> leftb(n,0),rightb(n,0);
    
//     for(int i=0  ; i< n ; i++)
//     {
//         if(s[i]=='|') tot=c ;
//         else if(s[i]== '*') c++ ;
         
//         rightb[i]= tot ;
//     }
//     // for(int i= 0;i< n; i++) cout<<rightb[i]<<' ';
//     //     cout<<endl;
        
//       c=0 ,tot=0 ;
//     for(int i=n-1  ; i>-1 ; i--)
//     {
//         if(s[i]=='|') tot=c ;
//         else if(s[i]== '*') c++ ;
         
//         leftb[i]= tot ;
//     }
//         // for(int i= 0;i< n; i++) cout<<leftb[i]<<' ';
//         // cout<<endl;
        
//    vector<int>ans ;
//         for(int i=0 ; i< q.size(); i++)
//           { 
//             int s= q[i][0] , e= q[i][1]      ;
//             tot =leftb[s] + rightb[e] -c ;
//             if(tot<0)tot= 0 ;
//             ans.push_back(tot);
//            }
//      return ans ;   
    
// 	M3 >>>>
// vector<int> platesBetweenCandles(string s, vector<vector<int>> &queries)
// 	{
// 		vector<int> candlesIndex;

// 		for (int i = 0; i < s.length(); i++)
// 		{
// 			if (s[i] == '|')
// 				candlesIndex.push_back(i);
// 		} 
// 		for (int i = 0; i < candlesIndex.size(); i++)
// 		cout<<candlesIndex[i]<<' ';
// 		cout<<endl;
		
// 		vector<int> ans;
// 		for (auto q : queries)
// 		{  
// 			int firstCandleIndex = lower_bound(candlesIndex.begin(), candlesIndex.end(), q[0]) - candlesIndex.begin();
// 			int lastCandleIndex = upper_bound(candlesIndex.begin(), candlesIndex.end(), q[1]) - candlesIndex.begin() - 1;
            
// 			if (lastCandleIndex <= firstCandleIndex)
// 			{
// 				ans.push_back(0);
// 				continue;
// 			}
// // cout<<candlesIndex[lastCandleIndex] <<' '<< candlesIndex[firstCandleIndex]<<' '<< (lastCandleIndex - firstCandleIndex);
// 			int tempAns = candlesIndex[lastCandleIndex] - candlesIndex[firstCandleIndex] - (lastCandleIndex - firstCandleIndex);//Number of plates between candles will be number of elements between first and last candle minus number of candles between them.

// 			ans.push_back(tempAns);
// 		}
// 		return ans;
// 	}
// M4 perfix sum
class Solution
{ public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        int n = s.length();
        vector<int> prev(n,n) , next(n,n) , prefixSum(n,0);
        
        for(int i=0;i<n;i++){
           if(i==0){
               if(s[i] == '|')
                   prev[i] = i;
               else
                   prefixSum[i] = 1;
           }
            else{
                if(s[i] == '|'){
                    prev[i] = i;
                    prefixSum[i] = prefixSum[i-1];
                }
                else{
                    prev[i] = prev[i-1];
                    prefixSum[i] = 1 + prefixSum[i-1];
                }
            }
        }
        
        for(int i=n-1;i>=0;i--){
            if(s[i] == '|')
                next[i] = i;
            
            else if(i != n-1 and s[i] != '|')
                next[i] = next[i+1];
        }
       
        vector<int> ans;
        for(auto q : queries){
            int l = q[0];
            int r = q[1];
            
            int i = next[l];
            int j = prev[r];
            
            if(j<=i || j==n || i==n)
                ans.push_back(0);
            else{
                ans.push_back(prefixSum[j] - prefixSum[i]);
            }
        }
        return ans;
    }
};
