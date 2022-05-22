class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alt(gain.size()+1) ;
        alt[0]=0;
        for(int i=1 ; i<=gain.size(); i++)
            alt[i]=gain[i-1]+alt[i-1];
        return *max_element(alt.begin(),alt.end());
    }
};