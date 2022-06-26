class Solution {
public:
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        
        int sum1=0 , sum2=0 , max1=0, max2=0 ;
        
        sum1= accumulate(nums1.begin(),nums1.end(),sum1);
       sum2= accumulate(nums2.begin(),nums2.end(),sum2);
        
               int ans = max(sum1, sum2);

        int a1, a2=0;
        for(int i= 0 ; i<nums1.size(); i++)
        {  a1 += (nums2[i] - nums1[i]);
           a2 += (nums1[i] - nums2[i]);
         
         max1= max(a1,max1) ;
         max2= max(a2,max2) ;
         
         if(a1<0)a1=0;
         if(a2<0)a2 =0;
        }
        
        ans= max(ans,max(sum1+max1,sum2-max1)) ;
        ans= max(ans,max(sum1-max2,sum2+max2)) ;

        cout<<sum1 <<' '<<sum2 ;

        return ans;
    }
};