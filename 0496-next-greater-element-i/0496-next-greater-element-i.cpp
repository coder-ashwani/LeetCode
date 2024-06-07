class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {        
        int n = nums1.size();
        vector<int> res(n,-1); //initailize arary in -1
        map<int,int> mp ;// 
        stack<int> st;


        for(int num : nums2){

            while(!st.empty() && st.top()<=num){
                mp[st.top()] =num;
                st.pop();
            }
            st.push(num);
        }
        for(int i=0;i<n;i++){
            if(mp[nums1[i]])
                res[i] = mp[nums1[i]];
        }
        return res;
        
    }
};