class Solution {
public:
    string countAndSay(int n) {
        //base case for recursion
        if(n==1) return "1"; 

        string s = countAndSay(n-1);
        string res ="";
        int counter=0;
        for(int i=0;i<s.length();i++){
            counter++;
            if(i == s.length()-1 || s[i]!=s[i+1]){
                res += to_string(counter)+s[i];
                counter =0; //reset counter
            }
        }
        return res;


    }
};