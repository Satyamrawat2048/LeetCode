class Solution {
public:
    bool isCovered(vector<vector<int>>& nums, int left, int right) {
        for(int i=left ; i<=right; i++)
        {
            bool seen = false ;
            for(int j=0 ; j< nums.size()&& !seen; j++)
                if(i>=nums[j][0] && i<=nums[j][1])seen=true ;
            if(!seen ) return false ;
        }
    return true;
    }
};