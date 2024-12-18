class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        int n = prices.size();
        for(int i = 0;i<n;i++){
            int dis = 0;
            for(int j =i+1;j<n;j++){
                    if(prices[j] <= prices[i]){
                        dis = prices[j];
                        break;
                    }
            }
            ans.push_back(prices[i] - dis);
        }
        return ans;
    }
};