class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int c=0 ;
        for(int i=1 ; i< nums.size() ;i++){
            if(nums[i-1]>= nums[i] )
            {
                 c++;
                if(i>1 && nums[i-2]>= nums[i])nums[i] = nums[i - 1];
            }
            }
        if(c>1) return false;
        return true ;
    }
};