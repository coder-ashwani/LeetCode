class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int  n =s1.length();
        int m = s2.length();
        // if(n>m) return false;
        // sort(begin(s1),end(s1));
        // for(int i =0;i<=m-n;i++){
        //     string substring = s2.substr(i,n);
        //     sort(begin(substring), end(substring));
        //     if(s1 == substring ) return true;
        // }
        // return false;

        vector<int> s1cnt(26,0), s2cnt(26,0);
        
        for(char c : s1){
            s1cnt[(c - 'a')]++;
        }
        int i =0,j=0;
        while(j<m){
            s2cnt[s2[j] - 'a']++;

            // shrinking the window
            if(j-i+1 > n ){
                s2cnt[s2[i] - 'a']--;
                i++;
            }
            if(s1cnt == s2cnt){
                return true;
            }
            j++;
        }
        return false;
    }
};