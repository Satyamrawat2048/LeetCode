class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int c=0,i ;
        int n= nums.size();
        if(n==1 ||n==2) return 1;
        for( i=0 ;i< n-1 ;i++)
        { 
            if(nums[i]>nums[i+1])
            { if(i>0 && i<n-2 && nums[i]>nums[i+2] && nums[i-1]> nums[i+1] ) return 0;
             // if(nums[i-1]> nums[i+1] && num[i+2]< nums[i])
              c++;
            }
            if(c>1) return 0;
        }
        return 1 ;
    }
};