string Solution::solve(string A) {
    stringstream ss(A);
    string word,res;
    ss>>res;
    while(ss>>word)
    {
        res.insert(0,word+" ");
    }
    return res;
}
