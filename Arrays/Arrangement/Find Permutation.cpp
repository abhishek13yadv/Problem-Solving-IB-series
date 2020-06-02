vector<int> Solution::findPerm(const string A, int B) {
    vector <int> ans;
    int n = A.size();
    int mx = n+1,mn = 1;
    for(int i=0;i<n;i++)
    {
        if(A[i] == 'I')
            ans.push_back(mn++);
        if(A[i] == 'D')
            ans.push_back(mx--);
    }
    ans.push_back(mx);
    return ans;
}
