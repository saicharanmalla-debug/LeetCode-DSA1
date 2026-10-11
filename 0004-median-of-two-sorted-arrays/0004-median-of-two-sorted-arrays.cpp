class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()+nums2.size()==0){
            return 0;
        }
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        if(nums1.size()==1){
            return nums1[0];
        }
        sort(nums1.begin(),nums1.end());
        if(nums1.size()%2!=0){
            return nums1[nums1.size()/2];
        }
        return  ((nums1[nums1.size()/2-1]+ nums1[nums1.size()/2])/2.0);
    }
};