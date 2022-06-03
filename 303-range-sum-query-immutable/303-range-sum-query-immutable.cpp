class NumArray {
public:
    vector<int>a ;
    NumArray(vector<int>& nums) {
    a = vector<int>(nums.size()+1); 
        a[0]=nums[0];
        
        for(int i=1 ; i<= nums.size();i++)
            a[i] = a[i-1] +nums[i-1];
    }
    
    
    int sumRange(int left, int right) {
       return a[right+1]- a[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */