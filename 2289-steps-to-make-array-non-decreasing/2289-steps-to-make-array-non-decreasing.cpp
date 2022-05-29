class Solution {
public:
    using pi = pair<int, int>;
//     void disp(vector<pi> v)
//     {
//         for(int i =0 ; i< v.size();i++)
//             cout<<v[i].first<<" "<<v[i].second<<endl ;
        
//         cout<<"done\n";
//     }
    int totalSteps(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;
        vector<pi> del;    // stores pairs of (previous id, toDelete id)
        for (int i = 0; i < n; ++i) {
            mp[i] = nums[i];
            if (i+1 < n && nums[i] > nums[i+1])
                del.emplace_back(i, i+1);
        }
        
        int ans = 0;  // number of rounds
        while (!del.empty()) {
            ++ans;
            vector<pi> nxt;  // pairs to delete in the next round
            for (auto [i,j] : del) mp.erase(j);   // first, get rid of the required deletions

            for (auto [i,j] : del) 
            {
                auto it = mp.find(i);
                if ( it == end(mp) || it == prev(end(mp)) )   // if it's not in the map anymore,
                    continue;                   // OR if it's the last element, skip it
                auto itn = next(it);            // now compare against next element in the ordering
                if (it->second > itn->second)   
                    nxt.emplace_back(it->first, itn->first);  // add the (current id, toDelete id)
            }
            swap(nxt, del);  // nxt is the new del
        }
        return ans;

    }
};