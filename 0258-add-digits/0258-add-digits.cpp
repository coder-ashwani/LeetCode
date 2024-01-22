class Solution {
public:
    int addDigits(int num) {
    //   The O(1) approach method is called Digit Root
    if(num==0) return 0;
    else if(num%9==0)
        return 9;
    else
        return num%9;
    }
};