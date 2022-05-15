class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        unordered_map<int, int> freq;

        freq[nums[n-1]]=1;
        
        for(int i=n-2 ; i> 1 ; i--)
        {
            for(int j=i-1 ; j>0; j--)
            {
                for(int k =j-1 ; k>=0 ; k--)
                    count+= freq[nums[i]+nums[j]+nums[k]];
            }
         freq[nums[i]]+= 1;
        }
        return count;
    }
};