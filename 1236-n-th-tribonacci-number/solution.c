int tribonacci(int n) {
       if(n == 0){
       return 0;
    }
    if(n == 1){
       return 1;
    }
    int a = 0,b = 1,c = 1,next;
    for(int k = 3;k<n+1;k++){
        next=a+b+c;
        a = b;
        b = c;
        c = next;
    }
    return c;
}
