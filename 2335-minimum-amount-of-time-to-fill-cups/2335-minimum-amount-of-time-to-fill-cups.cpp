class Solution {
public:
 int fillCups(vector<int>& a) {
       int maxi =0 , sum=0 ;
     
     for(int i:a )
     {
         sum+= i;
         maxi= max(maxi , i) ;
     }
     return max(maxi,( sum+1)/2);
    }
};