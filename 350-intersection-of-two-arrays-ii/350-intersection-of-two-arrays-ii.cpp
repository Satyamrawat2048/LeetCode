class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//M1 bruteforce O(n2)
//M2 sorting & two ptr O(nlogn)
//         int i=0 , j=0 ;
//        vector<int> ans;  
//         sort(nums1.begin(),nums1.end());        sort(nums2.begin(),nums2.end());

//         while(i<nums1.size()&& j< nums2.size())
//         {
//             if(nums1[i]==nums2[j])
//             {
//                 ans.push_back(nums1[i]);
//                 i++,j++ ;
//             }
//             else if(nums1[i]<nums2[j]) i++ ;
//             else j++ ;
//         }
//         return ans;
        
//M3 mapping o(N) create a map of smaller array and compare it with elmt by traversing larger array 
        
          int i=0 , j=0 ;
       vector<int> ans;  
        
        if(nums1.size()<nums2.size()) create_mp_of_smallerarr(nums1,nums2,ans) ;
        
        else create_mp_of_smallerarr(nums1,nums2,ans) ;

        return ans ;
    }
    
   void create_mp_of_smallerarr(vector<int>a,vector<int>b,vector<int>&ans)
   {     map<int,int> mp;
    
        for(int i=0 ; i<a.size(); i++)
            mp[a[i]]++ ;
        
        for(int i=0 ; i<b.size(); i++)
        {
            if(mp[b[i]]-- >0) 
                 ans.push_back(b[i]);
        }
    }
};