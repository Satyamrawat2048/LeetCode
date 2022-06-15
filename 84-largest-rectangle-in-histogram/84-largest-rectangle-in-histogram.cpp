class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int> st ;
        int i=0 , w,height ; 
        
        int m = 0;
        
        while(i<= h.size())
        {
            while(!st.empty() && (i==h.size() || h[st.top()] >= h[i] ))
            {
                height =h[st.top()] ; 
                st.pop(); 
                
                if(!st.empty()) w =i- st.top() -1; 
                else w= i;
                
                m = max(m , height*w) ;
            }
                st.push(i) ;
                i++ ;
        }
        return m ;
    }
};