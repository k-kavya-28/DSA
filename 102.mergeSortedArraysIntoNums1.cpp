//TLE aa rha hai

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        while(i<m && j<n){
            if(nums2[j]<nums1[i]){
                swap(nums2[j],nums1[i]);
            }
        }
        while(j<n){
            nums1[i++]=nums2[j++];
    }
    }
};