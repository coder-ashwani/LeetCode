class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        // int sum =(n*(n+1))/2;
        // int s2=0;
        // for(int i=0;i<n;i++){
        //     s2=s2+nums[i];
        // }
        int x1=0;
        int x2=0;
        for(int i=0;i<n;i++){
            x2=x2^nums[i];
            x1=x1^(i+1);

        }
        // x1=x1^n;
        return x1^x2;

        // return (sum-s2);
    }
};