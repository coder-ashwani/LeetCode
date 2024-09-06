class Solution {
public:
    int sumofdiv(vector<int> &nums, int divisor){
        int n = nums.size();
        int sum =0;
        for(int i=0; i<n;i++){
            sum += ceil((double)(nums[i])/ (double)(divisor));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int ans = INT_MAX;
        int high = *max_element(nums.begin(), nums.end());
        while(low<=high){
            int mid = (low+high)/2;
            if(sumofdiv(nums,mid) <= threshold){
                    ans = mid;
                    high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};