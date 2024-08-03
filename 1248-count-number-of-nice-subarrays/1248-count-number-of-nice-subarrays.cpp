class Solution {
public: 
    int numberOfSubarrays(vector<int>& nums, int k) {
        //  exact similiar to 930. Binary Subarrays With Sum and 
        // only difference is here given odd or even.
        return subarray(nums,k) - subarray(nums,k-1); 
    }
    int subarray(vector<int>& nums, int goal){
        if(goal<0) return 0;
        int l=0,r=0,sum=0,cnt =0 ;
        while(r<nums.size()){
            sum += (nums[r]%2);
            while(sum>goal){
                sum -= (nums[l]%2);
                l++;
            }
            cnt = cnt+(r-l+1);
            r =r+1;
        }
        return cnt;

    }
};