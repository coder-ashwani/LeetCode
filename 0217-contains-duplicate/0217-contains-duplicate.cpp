class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    //    int n=nums.size();
    //    for(int i=0;i<n-1;i++){
    //        for(int j=i+1;j<n;j++){
    //            if(nums[i]==nums[j]){
    //                return true;
    //            }
    //        }
    //    } 
    //    return false;

    unordered_map<int,int> mp;
    for(auto i : nums) mp[i]++;
    // bool flag =false;
    for(auto i : mp){
        if(i.second >=2 ) return true;
    }
    return false;
    
    }
};