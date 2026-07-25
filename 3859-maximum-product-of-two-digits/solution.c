int maxProduct(int n) {
    int num1 =0,num2 = 0,current=0;
    while(n > 0){
        current = n % 10;

    if(current > num1){
        num2 = num1;
        num1 = current;
    }
    else if(current > num2){
        num2 = current;
    }
    n /= 10;
    }
    return num1 * num2;
    

}
