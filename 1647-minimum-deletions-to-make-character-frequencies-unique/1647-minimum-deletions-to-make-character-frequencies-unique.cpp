class Solution {
public:
    int minDeletions(string s) {
       vector<int> v(26); 
    int n = s.size();
    for (int i = 0; i < n; i++)
      v[s[i]-'a']++;
        
    int c= 0;
    n=26 ;
    sort(v.begin(),v.end());
        
    for (int i = n-2; i>=0 ;i--)
    { if(v[i]==0 ) break ;
     
      if(v[i]>=v[i+1])
      {
          while(v[i]>=v[i+1])
           v[i]-- ,c++;
      }
     
     if(v[i]==0) 
     {
         int j =i-1 ; 
         while(j>=0)
         {  
             if(!v[j]) return c ;
             c+= v[j];
             j--;
         }
     }
     
    }
    return c ;
    }
};