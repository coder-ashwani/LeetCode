class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if(s.length()<=1){
            return s;

        } 
        //lambda function
        auto expandfromcenter = [&](int l, int r){
            while(l>=0 && r<n  && s[l] == s[r]){
                l--;
                r++;
            }
            return s.substr(l+1,r-l-1);
        };

        string maxstr = s.substr(0,1);
        for(int i=0;i<s.length()-1;i++){
            string odd = expandfromcenter(i,i);
            string even = expandfromcenter(i,i+1);

            if(odd.length() > maxstr.length()){
                maxstr = odd;
            }
            if(even.length() > maxstr.length()){
                maxstr =even;
            }
        }

        return maxstr;


    }
};