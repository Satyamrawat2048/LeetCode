class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
      
        int i=0  ,j=num.size()-1 ;
        
        while(i<j)
        {   int sum=num[i]+ num[j] ;
            if(sum== target)break  ;
            else if(sum>target) j-- ;
         else i++ ;
        }
        return {i+1,j+1};
    }
};