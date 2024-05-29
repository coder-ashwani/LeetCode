class Solution {
public:
    int maxDepth(string s) {
        // VPS - valid parenthesis string
        int depth=0,p=0;
        for( char c : s){
            if(c == '(') p++;
            else if (c == ')') p--;
            depth=  max(depth,p);
        }
        return depth;
    }
};