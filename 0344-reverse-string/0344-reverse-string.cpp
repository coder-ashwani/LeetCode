class Solution {
public:
    void reverseString(vector<char>& s) {
        int n= s.size();

        // for(int i=0;i<=n/2;i++){
        //     string temp= " ";
        //     s[i]= s][n-i-1];
        //     s[n-i-1]= temp;
        // }
        // return s;
        for(int i=0,j=n-1;i<j;i++){
            swap(s[i],s[j]);
            --j;
        }
        return ;
    }
};