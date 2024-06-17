#include<bits/stdc++.h>
class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n =h.size();
        int leftsm[n],rightsm[n];
        stack<int> st;
         // finding left smaller array
         for(int i=0;i<n;i++){
            while(!st.empty() && h[st.top()] >= h[i]){
                st.pop();
            }
            if(st.empty()) leftsm[i] =0;
            else leftsm[i]=st.top()+1;
            st.push(i);
        }
        while(!st.empty()) st.pop();
        
        //right smaalleer
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && h[st.top()] >= h[i]){
                st.pop();
            }
            if(st.empty()) rightsm[i] = n-1;
            else rightsm[i]=st.top()-1;
            st.push(i);
        }

        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            int area=(rightsm[i] - leftsm[i] +1)*h[i];
            maxi= max(maxi,area);
        }
        return maxi;
        
    }
};