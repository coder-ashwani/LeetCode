class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l =0,r =0, zeroes =0, maxlength =0;
        while(r<n){
            if(nums[r]== 0) zeroes++;
            if(zeroes>k){
                if(nums[l] == 0)  zeroes--;
                l++;
            }
            if(zeroes<=k)
            maxlength = max(maxlength,r-l+1);

                r++;
        }
        return maxlength;
        
    }
};