class Solution {
public:
    
    int divisorSubstrings(int num, int k) {
      string str= to_string(num)  ;
        int c=0;
        for(int i= 0;  i< str.size()-k+1; i++)
        { int ks=k;
          string s="";
         int j=0 ;
            while(ks--)
            {s = s+str[i+j++]; }
            
            int n= stoi(s);
         cout<<n<< " ";
         if(n==0) continue ;
            if(num%n==0) c++ ;
        }
        return c;
    }
};