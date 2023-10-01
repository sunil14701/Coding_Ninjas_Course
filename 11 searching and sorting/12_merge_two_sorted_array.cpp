class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0;
        vector<int>vec;
        while(i<m or j<n){
          if(i<m and j<n){
            if(nums1[i] < nums2[j]){
              vec.push_back(nums1[i++]);
            }else vec.push_back(nums2[j++]);
          }else if(i==m and j!=n)vec.push_back(nums2[j++]);
          else if(i!=m and j==n)vec.push_back(nums1[i++]);
        }
        for(int i=0;i<vec.size();i++){
          nums1[i] = vec[i];
        }
    }
};