class Solution {
public:
    string reformatNumber(string a) {
      int j= 0;
        
        for(int i=0 ; i< a.size();i++)
        {
            if(isdigit(a[i])) a[j++]=a[i];
        }
         a.resize(j);
        
        int n=j;
        j=0;
        
        string s;
        while(j<n)
        {
            
            if(n-j>4)
            {
                s+=a.substr(j,3);
                j+=3;
                s+='-';
            }
            
            if(n-j==4)
            {
                s+=a.substr(j,2);
                j+=2;
                s+='-';
            }
            
            if(n-j==3)
            {
                s+=a.substr(j,3);
                j+=3;
            }
            if(n-j==2)
            {
                s+=a.substr(j,2);
                j+=2;
            }
        }
        return s;
    }
};