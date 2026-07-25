int fib(int n){
    if(n < 2)
        return n;
    int i = 0,j = 1,next;
    for(int k = 2;k<n+1;k++){
        next=i+j;
        i = j;
        j = next;
    }
    return j;
}
