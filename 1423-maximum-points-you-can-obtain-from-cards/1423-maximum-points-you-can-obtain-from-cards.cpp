class Solution {
public:
    int maxScore(vector<int>& cards, int k) {
        int lsum = 0, rsum= 0 , maxsum =0;
        for(int i =0 ;i<k;i++){
            lsum = lsum+cards[i];
        }
        maxsum = lsum;
        // now reduncing window size
        int rindex = cards.size()-1;
        for(int i= k-1;i>=0;i--){
            lsum = lsum - cards[i];
            rsum = rsum + cards[rindex];
            rindex--;
            maxsum = max(maxsum,lsum+rsum);
        }
        return maxsum;

    }
};