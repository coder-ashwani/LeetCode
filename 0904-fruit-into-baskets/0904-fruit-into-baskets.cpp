class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        // intution -  lonegest subarray with at most 2 types of number

        unordered_map<int,int> mpp;
        int maxlen=0;
        int l =0,r=0;
        // int n = fruits.size();
        while(r<fruits.size()){
            mpp[fruits[r]]++;

            if(mpp.size() >2){
                mpp[fruits[l]]--; //left pointter move
                if(mpp[fruits[l]] == 0)
                mpp.erase(fruits[l]);
                l++; //moving left pointer after removing the element from map

            }
            else{
                maxlen = max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
        
    }
};