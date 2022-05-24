class Solution {
public:
    int longestValidParentheses(string s) {
     // stack<char> st; //using dp
     //    int c=0 ,maxi=0;
     //    for(int i=0 ; i< s.size() ; i++)
     //    {
     //        if(s[i]=='(') st.push(s[i]) ;
     //        else
     //        {  if(st.empty() && s[i]==')') { c=0;continue ;}
     //            else if(s[i]==')' && st.top()=='(') {c++;st.pop();
     //                                                maxi=max(c,maxi);}
     //         else c=0 ;
     //        }
     //    }
     //    if(!st.empty() && maxi!=1)maxi--;
     //    return maxi*2;
        
        //using stk 
        
        int maxi =0 ;
        stack<int> st ;
        
        st.push(-1);
        for(int i=0 ; i< s.size();i++)
        {
            if(s[i]=='(') st.push(i);
            else 
            {
                st.pop();
                if(st.empty()) st.push(i);
                else maxi=max(maxi,i-st.top()) ;
            }
        }
        return maxi;
    }
};