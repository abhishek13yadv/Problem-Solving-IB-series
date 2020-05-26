int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int t=0;
    int n = A.size();
    for(int i=1;i<n;i++){
        int x = abs(A[i-1]-A[i]);
        int y = abs(B[i-1]-B[i]);
        t = t+abs(x-y)+min(x,y);
        
    }
    return t;
}
