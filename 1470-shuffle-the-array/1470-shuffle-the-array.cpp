
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
         vector<int> v1;
        int i=0 , j= n ;
        while(i<n || j<n*2 )
        {
            v1.push_back(nums[i]);
            v1.push_back(nums[j]);
            i++ ; j++;
        }
        
        return v1;
    }
};