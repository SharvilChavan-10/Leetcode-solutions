int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 0 || numsSize == 1){
        return numsSize;
    }
    int dub = 0;
    for(int i = 0;i<numsSize;i++){
        if(nums[i] != nums[dub]){
            dub++;
            nums[dub] = nums[i];
        }
    }
    return dub + 1;
}
