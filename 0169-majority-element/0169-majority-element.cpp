class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // return nums[nums.size()/2];




        // using hashing
        // int n=nums.size();
        // unordered_map<int,int> mpp;
        // for(int i=0;i<n;i++){
        //     mpp[nums[i]]++;
        // }

        // for(auto it:mpp){
        //     if(it.second>(n/2))
        //     return it.first;
        // }
        // return 0;

        //moore voting algo
        int count =0;
        int element;
        

        for(int i=0;i<nums.size();i++){

            if(count == 0){
                count =1;
                element=nums[i];
            }
            else if(element==nums[i])
            count++;
            else
            count--;
        }
        return element;

    }
};