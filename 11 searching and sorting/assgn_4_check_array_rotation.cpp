int findKRotation(int nums[], int n) {
    int ind = 0;
    for(int i=0;i<n-1;i++){
        if(nums[i]>nums[i+1]){
            ind = i+1;
        }
    }
    return ind;
}