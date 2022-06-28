class Solution {

public:
  int minDeletions(string s)
  {
      vector<int> v(26,0); 
      priority_queue<int> pq;

    int n = s.size(),c=0;
    for (int i = 0; i < n; i++)
      v[s[i]-'a']++;
    
    for(int i=0 ; i<26 ; i++)
     { if(v[i])  pq.push(v[i]) ;
     }

    while (pq.size()!=1 && pq.top())
    { int elmt = pq.top() ;
    pq.pop();
     
     cout<<elmt<<' '<<pq.top()<<' '<<c<<endl;

     if(pq.top()==elmt){ pq.push(--elmt) ; c++;
      }
    }
    return c;
  }
};