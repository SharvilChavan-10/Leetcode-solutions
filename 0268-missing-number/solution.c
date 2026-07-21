int missingNumber(int* nums, int numsSize) {
   long long ExpectedSum,MissingNum; 
   long long ActualSum = 0;
   long long n = numsSize;
   ExpectedSum = (n * (n + 1))/2;
   for(int i = 0;i<n;i++){
    ActualSum += nums[i];
   }
   MissingNum = ExpectedSum -ActualSum;
   return MissingNum;
}
