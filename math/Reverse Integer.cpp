int Solution::reverse(int A) {  
    long long int x = A;
    long long res = 0;
    while(x){
        res = res*10 + x%10;
        if(res>INT_MAX||res<INT_MIN) return 0;
        x = x/10;
    }
    return res;
}
