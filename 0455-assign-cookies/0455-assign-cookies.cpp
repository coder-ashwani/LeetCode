class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        
        if(s.size()== 0) return 0;
        int cnt = 0,j=0;
       
        for(int i =0 ;i<g.size() && j<s.size() ;){
            if(s[j]>= g[i]){
                cnt++;
                i++;
            }
            j++;

        }
        return cnt;
    }
};