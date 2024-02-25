class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // int n =nums.size();
        // vector<int> temp;
        // int mm = (int)n/3 +1;
        // unordered_map<int,int> mpp;
        // for(int i=0;i<n;i++){
        //     mpp[nums[i]]++;
        //     if(mpp[nums[i]]==mm)
        //     temp.push_back(nums[i]);
        //     if(temp.size() == 2)
        //     break;
        // }
        // return temp;
        // solution using hashing
        int n=nums.size();
        int cnt1=0,cnt2=0;
        int el1= INT_MIN;
        int el2= INT_MIN;
        for(int i=0;i<n;i++){
            if(cnt1==0 && el2 != nums[i]){
                el1= nums[i];
                cnt1=1;
            }
            else if(cnt2 ==0 && el1 != nums[i]){
                el2= nums[i];
                cnt2=1;
            }
            else if(nums[i]== el1) cnt1++;
            else if(nums[i]== el2) cnt2++;
            else{
                cnt1--,cnt2--;
            }
        }

            //mannual check  for potential elements
            vector<int> ls;
            cnt1=0,cnt2=0;
            for(int i=0;i<n;i++){
                if(el1 == nums[i]) cnt1++;
                else if(el2 == nums[i]) cnt2++;
            }
            int mini =(int)(n/3) +1;
            if(cnt1 >= mini) ls.push_back(el1);
            if(cnt2 >= mini) ls.push_back(el2);

            return ls;


        
    }
};