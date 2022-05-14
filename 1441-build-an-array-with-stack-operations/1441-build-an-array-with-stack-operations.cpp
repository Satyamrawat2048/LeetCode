class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> str;
        int     t=0;
        for(int i=1;t<target.size(); i++)
        {  cout<<"ji";
            if(target[t]==i) {str.push_back("Push");t++;}
            else {str.push_back("Push");str.push_back("Pop");}
        }
        return str ;
    }
};