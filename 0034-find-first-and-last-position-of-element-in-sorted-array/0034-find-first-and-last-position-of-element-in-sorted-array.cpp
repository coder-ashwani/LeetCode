class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size();
        int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int ub =  lower_bound(nums.begin(), nums.end(), target+1) - nums.begin();
       if(lb < n && nums[lb] == target){
           return {lb,ub-1};
       }
       return {-1,-1};

       //O(2*logn)
    }
};