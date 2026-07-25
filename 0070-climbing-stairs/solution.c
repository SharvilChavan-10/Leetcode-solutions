int climbStairs(int n) {
    if(n < 3){
        return n;
    }  
    int a = 1,b = 2,next;
    for(int i = 3;i<n+1;i++){
        next = a + b;
        a = b;
        b = next;
    }
    return next;
}
