string Solution::convertToTitle(int A) {
    string res;
    while(A--> 0){
        res = (char)('A'+(A%26))+res;
        A/=26;
    }
    return res;
}
