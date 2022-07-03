class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        
        if(nums.size()<2)return nums.size() ;
        
        int prevd=nums[1]-nums[0] ;
        int c=prevd!=0 ? 2:1 ;
        
        for(int i=2 ; i<nums.size();i++)
        {
            int diff =nums[i]-nums[i-1 ] ;
            if((diff>0 && prevd<=0) ||diff<0 && prevd>=0 ){ prevd=diff; c++ ;}
        }
        return c;
    }
};