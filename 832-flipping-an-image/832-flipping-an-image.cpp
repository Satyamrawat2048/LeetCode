// class Solution {
// public:
//     vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
//         for(int i= 0 ; i< image.size();i++)
//         {
//          reverse(image[i].begin(),image[i].end());
//          for(int j= 0 ; j<image[i].size();j++) 
//          { 
//              if(image[i][j]==0) image[i][j]=1 ;
//              else image[i][j]=0 ;
//          }
//         }
//         return image ;
//     }
// };

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        for(int i= 0 ; i< image.size();i++)
        { int s=0, e= image[i].size()-1 ;
         
           while(s<=e)
           {
               if(image[i][s]==image[i][e])
               {
                  image[i][s]=1-image[i][s];
                   image[i][e]= image[i][s];
               }
               s++ ;e--;
           }
        }
        return image ;
    }
};