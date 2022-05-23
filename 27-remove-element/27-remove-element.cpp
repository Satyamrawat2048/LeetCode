class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
//         for(int i=0; i<nums.size(); i++)
//          if(nums[i]==val) nums.erase(remove(nums.begin(),nums.end(),val),nums.end()) ;
//         int i=0 ;
//         for( i=0; i<nums.size(); i++);
        
//         return i;
        int i=0,n=nums.size() ;
        while(i<n)
        {
            if(nums[i]==val) {nums[i] = nums[n-1];
            n--;}
            else i++ ;
        }
        return n;
    }
};