class Solution {//sliding window 
public:
    int countKDifference(vector<int>& nums, int k) {
        int n= nums.size(),ans=0 , j=0 ;
        
        sort(nums.begin(),nums.end()) ;
        
        for(int i=0 ; i< n;)
        { 
           int prev= nums[i] , c= 0;
            
            while(i<n && nums[i]==prev) i++,c++;//countingrepeating elmt
            while(j<n && nums[j]<k+prev) j++;//traversing upto nums[i]== k+prev ;
            int s= j ;
            
            while(j<n && nums[j]==prev+k ) j++;
            
            ans+=( j-s) * c;//taking wrt repeating elmt also
        }    
        return ans ;
    }
};