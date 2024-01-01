class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();

        k=k%n;

        //reverse first k elements
       reverse(nums.begin(),nums.begin()+n-k);
       //reverse k+1 element till last element
       reverse(nums.begin()+n-k,nums.end());
       //reverse the entire array from start to end
       reverse(nums.begin(),nums.end());

    }
};