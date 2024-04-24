class Solution {
public:
    bool isPowerOfFour(int n) {
        //using recursion
        if(n==1) return true;
        if(n%4 != 0 || n<=0) return false;

        return isPowerOfFour(n/4);
        // T.C - O(logn)

        

    }
};