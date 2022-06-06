class Solution {
public:
    bool isSumEqual(string f, string s, string t) {
        
        for(int i=0 ; i<f.size() ; i++ )
        f[i]= f[i]-49; 
        
        for(int i=0 ; i<s.size() ; i++ )
         s[i]= s[i]-49; 
        
        for(int i=0 ; i<t.size() ; i++ )
         t[i]= t[i]-49; 

        int n1= stoi(f) ,n2= stoi(s),n3= stoi(t);
        
        return n1+n2==n3;
    }
};