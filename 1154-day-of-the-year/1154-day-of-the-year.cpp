class Solution {
public:
    bool isleap(int yr )
    {
        if(yr%400==0 || (yr%4==0 &&yr%100!=0))return true; 
        return false;
    }
    int dayOfYear(string date) {
        int day= stoi(date.substr(8,2)) ;
        int mth= stoi(date.substr(5,2));
        int yr= stoi(date.substr(0,4));
        // cout<<yr<<mth<<day;
        
        for(int m=1; m<mth; m++)
        {  if(m==1||m==3||m==5 || m==7||m==8||m==10||m==12) day+= 31 ;
        else if(m==2) day+= isleap(yr)?29:28 ;
       else day+= 30 ;
        }
        
        return day ;
    }
};