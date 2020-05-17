vector<int> Solution::primesum(int n) {
    vector<bool> isPrime(n+1);
    for(int i=0;i<=n;i++)
        isPrime[i] = 1;
    isPrime[0] = 0;
    isPrime[1] = 0;
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            for(int j = i*2;j<=n;j+=i)
            isPrime[j] =0;
        }
    }
    vector<int> ans(2);
    for(int i=2;i<=n/2;i++){
        if(isPrime[i] && isPrime[n-i]){
            ans[0] = i;
            ans[1] = n-i;
            return ans;
        }
    }
    
}
