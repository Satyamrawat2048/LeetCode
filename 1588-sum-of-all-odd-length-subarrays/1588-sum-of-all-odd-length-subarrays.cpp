class Solution {
public:
    
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans =0 , sum=0 ;
        
        for(int i=0 ; i< arr.size();i++)
        {
            ans+=arr[i];
            sum=arr[i];
            int c=1;
            
            for(int j=i+1; j<arr.size(); j++)
            {
                sum+=arr[j];
                c+=1;
                if(c%2!=0) ans+= sum;
            }
        }
        return ans; 
    }
};