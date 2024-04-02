class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int count=0;
        for(char c: s){
            if(c == '(' && count++ >0) ans= ans+c;
            if(c == ')' && count-- >1) ans= ans+c;
        }
        return ans;
    }
};