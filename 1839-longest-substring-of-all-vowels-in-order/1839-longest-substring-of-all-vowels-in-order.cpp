//         int longestBeautifulSubstring(string word) {
//         char prev=48 ;
        
//         if(word.size()<5) return 0;
//         int c=0 ,maxi=0;
//         for(int i=0 ;i<word.size()-4; i++)
//         {  //prev=='a'? c=0:c=0 ;
//             c=0;
//             if(word[i]=='a'|| prev=='a')
//             {       
//                 prev= word[i]; 
//                 i++ ;c++ ;
//                 while(i<word.size())
//                 {   
//                     if(word[i]==prev|| word[i]==prev+4|| word[i]==prev+6)
//                     {prev=word[i];
//                         c++ ,i++;
//                     }
//                     else {prev=word[i];break ;}
//                 }
//             }
//              // cout<<c << ' '<<prev <<endl;
//          if(i && word[i-1]!='u')c=0;
//            if(prev=='a') i-- ;

//          maxi= max(maxi,c);
//         }
//         return maxi;
//     }
class Solution {
public:
    int longestBeautifulSubstring(string a) {
        int n=a.size();
        int maxi=0; 
        for(int i=1 ; i< n;i++)
        {  
            if(a[i-1]=='a'){
            int curr =1, unique=1;
            
            while(i<n && a[i-1]<= a[i]){
                unique += a[i-1]<a[i]? 1:0;
                curr++, i++ ;
            }
            if(unique==5) maxi= max(curr,maxi);
           }
        }
   return maxi;    }
};