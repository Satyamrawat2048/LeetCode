class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& v, int t) {//O(n*t)
        int n =v.size();
        vector<int > ans ;
        if(t==0) 
        {
            for(int i=0 ; i< n ; i++)
                ans.push_back(i) ;
            return ans;
        }
        
        vector<int> pre(n,0), suf(n,0);
        int cnt=0 ;
        for(int i=0 ; i<n-1 ;i++ )
        { if(v[i]>=v[i+1])cnt++ ;
          else cnt=0;
         
         pre[i]=cnt ;
        }
        cnt=0;
         for(int i=0 ; i<n-1 ;i++ )
        { if(v[i]<=v[i+1])cnt++ ;
          else cnt=0;
         
         suf[i]=cnt ;
        }
        //  for(int i:pre)
        //     cout<<i<< ' ';
        // cout<<endl;
        // for(int i:suf)
        //     cout<<i<< ' ';
        
        for(int i=t ; i<n-t ; i++)
        { 
           if(pre[i-1] &&pre[i-t] && pre[i-1]-pre[i-t]>=t-1)
           {
               if(suf[i] && suf[i+t-1] && suf[i+t-1] - suf[i]>=t-1)
                   ans.push_back(i) ;
           }
        }
       
        return ans;
    }
};