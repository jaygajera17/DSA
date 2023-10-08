/* https://leetcode.com/problems/sliding-window-maximum/ */

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
       
        vector<int>t;
        for(int i=0;i<nums.size()-k+1;i++)
        { priority_queue<int> pq;
            for(int j=i;j<i+k;j++)
            {
               pq.push(nums[j]);
               if(j==i+k-1) {
                   
                   t.push_back(pq.top());
               }
            }
        }
        return t;
    }
};