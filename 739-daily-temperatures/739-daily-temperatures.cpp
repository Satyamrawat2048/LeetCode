class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
//  Bruteforce O(n2)        
//         int n=temp.size();
//         vector<int> v(n,0);
        
//         for(int i=0 ; i<n; i++)
//         {  for(int j=i+1 ; j<n ;j++)
//             { if(temp[i]< temp[j] ){ v[i]= j-i; break ;}
//             }
//         }
//         return v;
        
        int n=temp.size();
        vector<int> v(n,0);
        
        stack<int> stk;
        for(int i=0 ; i<n; i++)
        {          
         while(!stk.empty() && temp[stk.top()]< temp[i])
         {
             v[stk.top()]= i-stk.top() ;
              stk.pop();
         }
         stk.push(i);
         }
        return v;
    }
};