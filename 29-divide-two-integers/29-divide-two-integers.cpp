class Solution {
public:typedef long long ll;

int divide(int n_, int d_) {
    if(n_==-2147483648 && d_==-1 ) return 2147483647;
    ll ans=0;
    ll n=abs((ll)n_);
    ll d=abs((ll)d_);
    while(n>=d){
        ll a=d;
        ll m=1;
        while((a<<1) < n){a<<=1;m<<=1;}
        // cout<<m<<" "<<ans<<endl;
        ans+=m;
        n-=a;
    }
    if((n_<0&&d_>=0)||(n_>=0&&d_<0))
        return -ans;
    return ans;
}
};