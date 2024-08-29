class Solution {
public:
    int minBitFlips(int start, int goal) {
        if(start == goal) return 0;
        int ans = start^goal;
        int cnt =0;
        while(ans>1){
            if(ans%2 == 1) cnt +=1;
            ans=ans/2;

        }
        cnt +=1;
        return cnt;
    }
};