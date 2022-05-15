class Solution
{
public:
    vector<int> decrypt(vector<int> &a, int k)
    {
        int c = 0, n = a.size();
        vector<int> ans(n, 0);

        if (k == 0)
            return ans;
        for (int i = 0; i < n; i++)
        {
            c = k;
            if (k > 0)
            {
                int ind = (i + 1) % n;

                while (c--)
                {
                    ans[i] += a[ind];
                    ind = (ind + 1) % n;
                }
            }

            else
            { int ind ;
             if(i==0){ ind =n-1; }
              else  ind= i-1 ;
             
             while(c++)
             {
               ans[i]  += a[ind];
                if(ind==0){ ind =n-1; }
              else ind= ind-1 ;
             }
             
            }
        }
        return ans;
    }
};
