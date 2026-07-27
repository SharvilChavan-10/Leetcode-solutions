int findGCD(int* nums, int numsSize) {
    int num1=nums[0],num2=nums[0],a=1;
    for(int i=1;i<numsSize;i++){
        if(nums[i] > num1){
            num1 = nums[i];
        }
        if(nums[i] < num2){
            num2 = nums[i];
        }  
        int limit = (num2 < num1) ? num2 : num1;
        for(int j = limit;j>=1;j--){
        if (num1 % j == 0 && num2 % j == 0){
            a = j;
            break;
        }
      }
    }
    return a;
}
