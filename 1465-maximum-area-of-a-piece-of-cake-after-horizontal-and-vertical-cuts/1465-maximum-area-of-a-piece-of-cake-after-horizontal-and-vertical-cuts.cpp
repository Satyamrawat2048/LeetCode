class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        hc.push_back(h);        hc.push_back(0);

        vc.push_back(w) ;   vc.push_back(0) ;
        
        vector<int> diff1(hc.size(),0), diff2(vc.size(),0) ;
        
        sort(hc.begin(),hc.end());
        sort(vc.begin(),vc.end());
        
        for(int i=0 ; i<hc.size()-1; i++)
        { diff1[i]= hc[i+1]- hc[i] ;
        }
        
        for(int i=0; i<vc.size()-1; i++)
        { diff2[i]= vc[i+1]- vc[i] ;
        }
        
        // for(int i:diff1) cout<<i<<" ";
        return ((long long)*max_element(diff1.begin(),diff1.end()) * (*max_element(diff2.begin(),diff2.end()))%(1000000007) );
    }
};