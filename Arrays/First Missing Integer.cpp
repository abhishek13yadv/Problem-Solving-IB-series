int Solution::firstMissingPositive(vector<int> &A) {
    sort(A.begin(),A.end());
    int i=1;
    while(i>0)
    {
        if(binary_search(A.begin(),A.end(),i))
        {
            i++;
        }
        else
        {
            break;
        }
    }
    return i;
}
