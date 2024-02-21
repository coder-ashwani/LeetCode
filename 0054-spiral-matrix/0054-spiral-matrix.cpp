class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int n=m.size(); // no of rows
        int l=m[0].size(); // no of cols
        int top=0,right=l-1,bottom=n-1,left=0,k=0;
        vector<int>arr;

        while(left<=right && top<=bottom)
        {
            for(int i=left;i<=right;i++)
            {
                arr.push_back(m[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                arr.push_back(m[i][right]);
            }
            right--;
            if(top<=bottom){
            for(int i=right;i>=left;i--)
            {
                arr.push_back(m[bottom][i]);
            }
            bottom--;
            }
            if(left<=right){
            for(int i=bottom;i>=top;i--){
                arr.push_back(m[i][left]);
            }
            left++;
            }
        }
        return arr;
    }
};