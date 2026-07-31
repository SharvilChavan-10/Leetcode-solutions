int findNumbers(int* nums, int numsSize) {
    int even = 0;
    for(int i = 0; i < numsSize; i++){
        int digit = 0;
        int current = nums[i];
        while(current > 0){
            digit++;
            current = current / 10;
        }
        if(digit % 2 == 0){
            even++;
        }
    }
    return even;
}
