class Solution {
public:
    void comb(int ind,int k ,vector<int>&nums,vector<int>&ds, vector<vector<int>>&ans)
    {   
        if(ds.size()==k)
        {
            ans.push_back(ds);
            return ;
	   }
        for(int i= ind ; i< nums.size(); i++)
       { ds.push_back(nums[i]);
        comb(i+1,k, nums, ds, ans);
        ds.pop_back();
       }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int> >ans ; 
        vector<int> ds, nums(n);
        for(int i=0 ; i<n; i++)
         nums[i]= i+1 ;

		//  for(int i=0 ; i< nums.size(); i++) cout<<nums[i]<<" ";
        comb(0,k, nums, ds, ans);
        return ans;
    }
};