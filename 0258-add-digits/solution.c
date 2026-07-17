int addDigits(int num) {
    int digit=0;
    int size,temp;
        size = num % 10;
    while(num >= 10){
    int sum=0;
    temp = num;
    while(temp != 0){
        sum += temp % 10;
        temp = temp / 10;
        digit++;
    } 
    num = sum;
    }
    return num;
}

