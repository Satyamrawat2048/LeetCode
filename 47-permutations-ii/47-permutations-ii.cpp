class Solution {
public:
         set<vector<int>> st;

    void recpermute(int ind ,vector<int>&nums, vector<vector<int> >&ans)
    {
        if(ind==nums.size()&& st.find(nums)==st.end()) 
        {
            ans.push_back(nums);
            st.insert(nums);
            return ;
        }
        for(int i=ind; i <nums.size(); i++)
        {  
            swap(nums[ind], nums[i]);
         recpermute(ind+1, nums, ans);
         swap(nums[ind],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    { sort(nums.begin(),nums.end());
        vector<vector<int>> ans; 
             recpermute(0,nums, ans);
return ans;
    }
};