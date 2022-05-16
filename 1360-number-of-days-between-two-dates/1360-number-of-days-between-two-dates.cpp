class Solution {
public:
    
    int caldays(string d1)//calc days from 1971-00-00
    {
         int yr1=0, mth1=0, day1=0 ,day=0 ;
        extract(yr1,mth1, day1,d1) ; 
        
        for(int i= 1971; i< yr1 ; i++)//years to day 
            day+=yrtoday(i);
        
        for(int i=1 ; i< mth1; i++)//mth to day
            day+=mthtoday(i,yr1) ;

        return day+day1 ;
    }
    int yrtoday(int y)
    {
        if(y%400==0 || (y%100!=0 && y%4==0)) return  366;
        return 365; 
    }
    int mthtoday(int m,int y)
    {
        if(m==1||m==3||m==5 || m==7||m==8||m==10||m==12) return 31 ;
        if(m==2) return yrtoday(y)==365 ? 28:29 ;
        return 30 ;
    }
    
    void extract(int&yr,int&mth,int&day,string d1)
    { string s="";
     for(int i=0; i<4 ;i++ )   
     {
         s+=d1[i];
     }
     yr= stoi(s);
     s="";
     
     for(int i=5; i<7 ;i++ )   
     {
         s+=d1[i];
     }
     mth= stoi(s);
     s="";
      for(int i=8; i<10 ;i++ )   
     {
         s+=d1[i];
     }
     day= stoi(s);
    }
    
    int daysBetweenDates(string d1, string d2) {
       return abs(caldays(d2)-caldays(d1)) ;
    }
};