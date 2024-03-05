class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n =nums.size();

        // for(int i=0;i<n;i++){
        //     if((i==0 || nums[i]>nums[i-1]) && (i== n-1 || nums[i]>nums[i+1]))
        //     return i;
        // }
        // return -1;   
        // this taking O(n) time we have to solve this question in log(n) time 


        if(n==1) return 0;
        if(nums[0]>nums[1])  return 0;
        if(nums[n-1] > nums[n-2]) return n-1;

         int low=1,high=n-2;
         while(low<=high){
            int mid= (low+high)/2;
            if(nums[mid]> nums[mid-1] && nums[mid]>nums[mid+1])
            return mid;
            else if(nums[mid]>nums[mid-1])  // increasing curve i.e peak occurs on right
            low=mid+1;
            else                        //decreasing curvei.e peak occurs on left
            high=mid-1;
        }  
           
        return -1;
    }
};