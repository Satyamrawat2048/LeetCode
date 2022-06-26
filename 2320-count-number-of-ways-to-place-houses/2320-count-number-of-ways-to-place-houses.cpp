class Solution {
public:
    typedef long long ll ;
    ll p = 1e9+7 ;
    
    long long fib(int n )
    { ll f=0 , s=1, next=1 ;
        
        for(int i =2 ;i<=n ;i++)
        { f=s;
            s=next ;
         next = (f+s )%p ;
        }
     return next;
    }
    
    int countHousePlacements(int n) {
  ll res= fib(n+1);
    return (res*res)%p ;
        
    }
};

//   ll house=1, space=1;
//         ll total = house+space;
//         for(int i=2;i<=n;i++){
// 	        house = space;
// 	        space = total;
// 	        total = (house+space)%mod;
// 	    }
// 	    return (total*total)%mod;