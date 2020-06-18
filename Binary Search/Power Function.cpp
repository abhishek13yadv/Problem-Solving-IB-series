int b;
int power(int x, int y)
{
    long long int temp;
    if( y == 0) return 1;
    temp = power(x, y/2);
    if (y%2 == 0) 
        return ((temp%b)*(temp%b))%b;
    else
        return (x*((temp*temp)%b))%b;
}
int Solution::pow(int x, int n, int d) {
    b=d;
    if(x<0)
        x=x+d;
    if(x==0)
        return 0;
    return power(x,n);
}
