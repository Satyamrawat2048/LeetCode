class Solution {
public:
    int maximumBags(vector<int>& cap, vector<int>& rock, int a ) 
    {int n=cap.size();
        vector<int> rem(n,0) ;
        
        for(int i=0; i< n ; i++)
            rem[i]=cap[i]-rock[i];
        
         map<int,int> mp ;

        for(int i=0 ; i<n; i++)
        { mp[i]=i ; //mp[i] has ind
        }
     sort(rem.begin(),rem.end()) ;
     
      int k=0;
     for(int i=0 ; i< n ; i++)
           {   if(rem[i]==0) k++;
              else if( rem[i]<=a) {a-= rem[i] ;k++;}
              
            if(a==0) break ;
           }

     return k;
    }
};