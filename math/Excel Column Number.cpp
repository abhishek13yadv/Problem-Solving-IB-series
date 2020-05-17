int Solution::titleToNumber(string A) {
    int res = 0;
    for(const auto & c:A)
    {
        res*=26;
        res+=c - 'A' +1;
    }
    return res;
}
