class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        hc.push_back(h);        hc.push_back(0);

        vc.push_back(w) ;   vc.push_back(0) ;
        
        sort(hc.begin(),hc.end());
        sort(vc.begin(),vc.end());
        
        int maxdiff1=0,maxdiff2=0 ;
        for(int i=0 ; i<hc.size()-1; i++)
        { maxdiff1= max(maxdiff1, hc[i+1]- hc[i]) ;
        }
        
        for(int i=0; i<vc.size()-1; i++)
        { maxdiff2 = max(maxdiff2,vc[i+1]- vc[i] );
        }
        
        // for(int i:diff1) cout<<i<<" ";
        return ((long long) maxdiff1*maxdiff2)%(1000000007) ;
    }
};