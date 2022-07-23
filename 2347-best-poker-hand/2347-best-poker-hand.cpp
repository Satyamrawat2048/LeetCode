class Solution {
public:
    string bestHand(vector<int>& r, vector<char>& s) {
        sort(r.begin(),r.end()) ;
        sort(s.begin(),s.end()) ;
        
        int maxr=0 ,maxs=0 ;
        int cr=1, cs=1 ;
        for(int i=1 ; i<r.size(); i++)
        { if(s[i]==s[i-1]) cs++; 
         else cs= 1;
          maxs= max(cs,maxs)    ;
        }
        
        if(maxs==r.size()) return "Flush" ;
        
        for(int i=1; i< s.size(); i++)
        {
            if(r[i]==r[i-1])cr++ ;
            else cr= 1 ; 
            maxr=max(cr,maxr) ;
        }
       if(maxr >=3 )return"Three of a Kind" ;
        
        if(maxr==2) return "Pair" ;
        return "High Card" ;
    }
};