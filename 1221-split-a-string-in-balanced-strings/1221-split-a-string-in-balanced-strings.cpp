class Solution {
public:
    int balancedStringSplit(string s) {
    if( s.size()==0) return 0;
        
         int left = 0, right = 0, score = 0;
        for (char c:s) {
            if (c == 'L')
                left++;
            else
                right++;
            if (left == right) 
                score++;
        }
        return score;
}
};