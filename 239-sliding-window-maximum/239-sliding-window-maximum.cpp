class Solution {
public:
         // vector<int> maxSlidingWindow(vector<int>&v, int k) {
//     {    int n= v.size();
//       vector<int> ans;
//      queue<int> q;
//      multiset<int> p ;
     
//      for(int i=0 ; i<k; i++)
//      {
//          q.push(v[i]) ; p.insert(v[i]) ;
//      }
//      ans.push_back(*p.rbegin()) ;
//      p.erase(p.find(q.front())) ; q.pop() ;
   
//         for(int i=k ; i<n; i++ )
//         {  
//           q.push(v[i])  ; p.insert(v[i]) ;
            
//          ans.push_back(*(p.rbegin())); 
//          p.erase(p.find(q.front())) ;  q.pop() ;
//         }
//         return ans;
  
   vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       deque<int> queue;
       vector<int> ans;
       for (int left = 0; left < nums.size(); ++left) {
           
           // As the window move on, element nums[left-k] will be outdated.
           if (queue.front() == left - k) queue.pop_front();
           
           // Now we are ready to push our new element nums[left]'s index into the queue.
           // But before that, we should clear elements which is smaller then nums[left].
           // Why? Because if nums[left] is bigger then nums[i], 
           // there will be no way for nums[i] be selected as the max number in range (left-k, left]
           while (!queue.empty() && nums[queue.back()] < nums[left]) queue.pop_back();
           // Now push the index into our queue.
           queue.push_back(left);
           
           // Okay, now nums[queue.front()] mush be the max number in range (left-k, left] 
           if (left - k + 1 >= 0) ans.push_back(nums[queue.front()]);
       }
       return ans;}
};