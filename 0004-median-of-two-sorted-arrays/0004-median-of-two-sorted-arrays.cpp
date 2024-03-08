class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1= nums1.size();
        int n2= nums2.size();

        //using two pointer approach
        int i=0,j=0,el1=0,el2=0;
        for(int count=0;count<=(n1+n2)/2;count++){
            el2=el1;
            if (i != n1 && j != n2){
                if(nums1[i]<nums2[j]){
                el1= nums1[i++];   
                }
                else{
                    el1= nums2[j++];
                }
            }
            else if(i< n1){
                el1= nums1[i++];
            }
            else{
                el1= nums2[j++];
            }
               
        }

        //checking
        if ((n1 + n2) % 2 == 1) {
            return (double)(el1);
        }
         double ans= double(el1+ el2);
         return ans/2;
    }
};