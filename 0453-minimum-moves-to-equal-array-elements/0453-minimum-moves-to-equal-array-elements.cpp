class Solution {
public:
    int minMoves(vector<int>& nums) {

        // The result of min_element is an iterator pointing
        //  to the minimum element in the range.
        // The dereference operator (*) is used to get the actual value 
        // (the minimum element) that the iterator points to.
        int min = *min_element(nums.begin(),nums.end());
        int  sum=0;
        for(int i =0;i<nums.size();i++){
            sum += nums[i]-min;

        }
        return sum;

        // T.C= O(n)
    }
};