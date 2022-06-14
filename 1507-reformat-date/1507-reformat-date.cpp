class Solution {
public:
    string ret(string s){
        if(s=="Jan")    return "01";
        else if(s=="Feb")   return "02";
        else if(s=="Mar")   return "03";
        else if(s=="Apr")   return "04";
        else if(s=="May")   return "05";
        else if(s=="Jun")   return "06";
        else if(s=="Jul")   return "07";
        else if(s=="Aug")   return "08";
        else if(s=="Sep")   return "09";
        else if(s=="Oct")   return "10";
        else if(s=="Nov")   return "11";
        else        return "12";
    }
    
    string reformatDate(string date) {
        
     string s;
        
        int i=0 ;
        
        while(isdigit(date[i]))
         s+= date[i++]      ;
        
        string day= s ;
         i+=3 ;
        s="" ;
        
        while(isalpha(date[i])) s+= date[i++] ;
        string mth =ret(s) ;
        if(stoi(day) <10) day= "0"+day ;
        
        s= date.substr(date.size()-4 ,4) ;
        string yr= s ;
        string res= yr +"-"+mth+ "-"+day ;
        return res ;
    }
};