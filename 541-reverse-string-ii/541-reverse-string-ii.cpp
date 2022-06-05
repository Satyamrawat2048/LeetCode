class Solution {
public:
    string reverseStr(string a, int k) {
       
        for(int l = 0 ; l<a.size(); l+=2*k)
        { int i = l ,j = min(l+k-1, (int)a.size()-1) ;
        
         while(i<j)
             swap(a[i++],a[j--]);
         
        }
        return a;
    }
}; 