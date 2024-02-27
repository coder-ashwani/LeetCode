class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int maxi= INT_MIN;
        // int n= nums.size();
        // // int prod=1;
        // for(int i=0;i<n;i++){
        //    int  prod= 1;
        //     for(int j=i;j<n;j++){
        //         prod= prod*nums[j];
        //         maxi= max(maxi,prod);
        //     }
        // }
        // return maxi;     // taking O(n*n)

        int prefix=1,suffix=1;
        int ans=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
             if(prefix==0) prefix=1;
             if(suffix==0) suffix=1; 
             
            prefix= prefix*nums[i]; 
            suffix= suffix* nums[n-i-1]; //last se multiply kar rahe hai
            
            ans=max(ans,max(prefix,suffix));
        }
        return ans;
    }
};