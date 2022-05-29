class Solution {
public:

    string discountPrices(string s, int dis) {
        string ans="";
        for(int i=0;i<s.size();){
            if(s[i]!='$'){
                ans+=s[i];
                i++;
            }
            else
            {
                if((i>0 && s[i-1]!=' ') || !isdigit(s[i+1])){
                    ans+=s[i];
                    i++;
                }
                else
                {
                    i++ ;
                    long val=  0; 
                    while(i<s.size() && isdigit(s[i]))// 
                    { val*=10 ;
                        val+=(s[i]-'0') ;
                     i++;
                    }
                    
                    if(i< s.size() &&s[i]!= ' ') ans=ans+'$'+to_string(val);
                    else{
                        val=(val*100 -val*dis) ;
                        int intpart = (val/100)*100;
                        int decimal = val-intpart;
                        string dec = to_string(decimal);
                        string intt = to_string(val/100);
                        if(dec.size() < 2) dec = '0'+ dec;
                        ans += ('$' + intt + '.' + dec);
                    }
                }
            }
        }
        return ans ;
    }
};