class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> ans(arr.size(),0) ;
        int j=0 ;
        for(int i= 0 ; i<arr.size()&& j<ans.size();i++)
           { if(arr[i]==0) 
             {
               ans[j++]=0;
               if(j<arr.size())
               ans[j++]=0;
             }
            else ans[j++]=arr[i];
          }
    for(int i=0 ; i< arr.size();i++)
        arr[i]=ans[i];
    }
};