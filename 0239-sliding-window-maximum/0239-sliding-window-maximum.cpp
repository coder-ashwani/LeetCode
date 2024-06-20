#include<bits/stdc++.h>
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> dq;
        vector<int> ans;
        for(int i=0;i<n;i++){
             // remove elements that are out of the current window
            if(!dq.empty() && dq.front()==i-k) dq.pop_front();
            
            // maintain elements in deque in decreasing order
            while(!dq.empty() && nums[dq.back()] < nums[i] )
                dq.pop_back();
            
            // add current element at the back of the deque
            dq.push_back(i);
             // add the front element of the deque (max element) to the ans vector once the first window is formed
            if(i>=k-1) ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};