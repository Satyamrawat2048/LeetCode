// class Solution {
// public:
//     void combination(int n, int ind, set<string>&st, string s, vector<string>&perm)
//     {
//         if(ind==n)
//         {
//             if(st.find(s)==st.end())
//                 perm.push_back(s);
//         return ;}
//         combination(n, ind+1, st, s+"0", perm);
//         if(perm.size()!=0) return ;
        
//         combination(n, ind+1, st, s+"1", perm);
//         if(perm.size()!=0)return ;
        
//     }
//     string findDifferentBinaryString(vector<string>& nums) {
        
//         set<string>st;
//         for(int i=0;i<nums.size();i++)
//             st.insert(nums[i]);
        
//         vector<string>perm;
//         string s ="";
//         int n = nums[0].size();
//         combination(n,0,st,s,perm);
//         return perm[0];
//     }
// };
class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        
        string res;
        
        for (int i = 0; i < nums.size(); i++) 
            res += nums[i][i] == '0' ? "1" : "0"; 
        
        return res; 
    }
};