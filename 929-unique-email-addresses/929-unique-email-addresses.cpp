class Solution {
public:
    
    int numUniqueEmails(vector<string>& nums) {
        int n= nums.size() ;
        map<string,int> mp ;
        
        for(int i=0; i< n ; i++)
        { string s="";
         int j=0;
            while(nums[i][j]!='@')
            {  if(nums[i][j] =='+'){break;}
             
               else if(nums[i][j]=='.'){ j++; continue ;}
             
                s+=nums[i][j];j++ ;
            }
          if(nums[i][j]=='+') 
              while(nums[i][j]!='@') j++;
          
         while(j<nums[i].size())
             { s+=nums[i][j];j++;}
         
         
         nums[i]=s ;
         mp[s]++;
        }
        int c=0 ;
        for(auto it: mp)
        { cout<<it.first<<" ";
            c++ ;
        }
        return c;
    }
};