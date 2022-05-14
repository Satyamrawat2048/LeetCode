
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
         vector<int> v1;
        int i=0 ;
        while(i<n )
        {
            v1.push_back(nums[i]);
            v1.push_back(nums[i+n]);
            i++;
        }
        
        return v1;
    }
};