class Solution {
public:
    void subsets(int ind, vector<int> &ds,vector<int> &nums,vector<vector<int>> &ans ){
        if(ind == nums.size()){
            ans.push_back(ds);
            return;
        }
        //taking the particular element
        ds.push_back(nums[ind]);
        subsets(ind+1,ds,nums,ans);
        ds.pop_back();

        //not taking the elemnet
        subsets(ind+1,ds,nums,ans);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;

        subsets(0, ds , nums , ans);
        return ans;
    }
};