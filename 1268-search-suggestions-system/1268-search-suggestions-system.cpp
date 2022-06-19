class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string> &products, string searchWord) {
        
//         sort(products.begin(), products.end());
//         vector<vector<string>> result;
//         int start, bsStart = 0, n=products.size();
//         string prefix;
//         for (char &c : searchWord) {
//             prefix += c;

//             start = lower_bound(products.begin() + bsStart, products.end(), prefix) - products.begin();

//             result.push_back({});

//             // Add the words with the same prefix to the result.
//             // Loop runs until `i` reaches the end of input or 3 times or till the
//             // prefix is same for `products[i]` Whichever comes first.
//             for (int i = start; i < min(start + 3, n) && !products[i].compare(0, prefix.length(), prefix); i++)
//                 result.back().push_back(products[i]);

//             // Reduce the size of elements to binary search on since we know
//             bsStart = start;
//         }
//         return result;
        sort(products.begin(), products.end());
        int a = 0;
        int b = products.size()-1;
        
        vector<vector<string>> result(searchWord.size());
        for (int i = 0; i < searchWord.size() && a <= b; ++i) {
            while (
                a <= b &&
                // Skip products[a] if index i is not a match
                (products[a].size() <= i || products[a][i] != searchWord[i])
            ) {
                ++a;
            }
            while (
                a <= b &&
                // Skip products[b] if index i is not a match
                (products[b].size() <= i || products[b][i] != searchWord[i])
            ) {
                --b;
            }
            
            // Pick the first 3 starting from a,
            // but not going over b
            for (int k = a; k <= b && k < a+3; ++k) {
                result[i].push_back(products[k]);
            }
        }
        return result;
        
    }
};