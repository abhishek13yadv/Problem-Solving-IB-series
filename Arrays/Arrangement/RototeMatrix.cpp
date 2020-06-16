void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
    int n = A.size();
    for(int i=0;i<n/2;i++)
    {
        A[i].swap(A[n-i-1]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(A[i][j],A[j][i]);
        }
    }
    
    
}


void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
  
    int n = A.size();
    int k = n*n/4;
    int i=0,j=0,a;
    while(k)
    {
        int y=A[i][j],a=4;
        int p=i,q=j;
        while(a){
           int x=A[q][n-p-1];
           A[q][n-p-1]=y;
           y=x;
           a--;
           int t=p;
           p=q;
           q=n-t-1;
        }
        if(j<n-i-2) j++;
        else{i++;j=i;}
        k--;
    }
}

