class Solution {
public:
    long long calculateHours(vector<int>& piles,int hours){
        long long totalhrs=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            totalhrs += ceil((double)piles[i]/(double)hours);
            //double use kar rahe jisse answer decimal mei aaye aur usko 
            // ceil(i.e upper value le sake)

        }
        return totalhrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,ans=-1;
        int high= *(max_element(piles.begin(),piles.end()));
        while(low <= high){
            int mid=(low+high)/2;
            // now calculate total hours
            long long totalHours= calculateHours(piles,mid);
            if(totalHours<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
        return ans;
    }
};