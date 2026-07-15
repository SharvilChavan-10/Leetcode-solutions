
bool isPalindrome(int x) {
    int original;
    int num,remainder=0;
    original =x;
    num = x;
    long long reverse = 0;
   
    while(num != 0){
    remainder = num % 10;
    reverse = reverse * 10 + remainder;
    num = num/10;
}
   if (x < 0) {
        printf("false\n");
        printf("From left to right, it reads %d. From right to left, it becomes %d. Therefore it is not a palindrome.\n",original,reverse);
        return false;
    }
    if(reverse == original){
        printf("true\n");
        printf("%d read as %d from left to right and from right to left\n",original,reverse);
        return true;
    }
    else{
        printf("false\n");
        printf("From left to right, it reads %d. From right to left, it becomes %d. Therefore it is not a palindrome.\n",original,reverse);
        return false;
    }

}

