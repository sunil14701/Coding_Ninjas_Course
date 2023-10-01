class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros = 0, right = nums.size()-1;
        for(int i=0;i<=right;i++){
          if(nums[i]==0) swap(nums[zeros++],nums[i]);
          if(nums[i]==2) swap(nums[right--],nums[i--]);
        }
    }
};