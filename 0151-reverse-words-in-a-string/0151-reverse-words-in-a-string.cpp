class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        int i=n-1; //
        // intj;
        string ans;
       while(i>=0){
        while(i>=0 && s[i] == ' ') i--;
        int j=i;
        if(i<0 ) break;
        while(i>=0 && s[i] != ' ') i--;
        if(ans.length()==0){
            ans=s.substr(i+1,j-i);
        }
        else{
            // ans=s.substr(i+1,j-1)+ " " +ans;
             ans = ans+" "+ s.substr(i + 1, j - i);
        }
       }
       return ans;
    }
};