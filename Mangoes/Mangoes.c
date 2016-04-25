#include<stdio.h>
int main()
{
    long long int n,x,t;
    scanf("%lld",&t);
    while(t--)
    {
    scanf("%lld",&n);
    x=n;
    n=(n-1)/2;
    printf("%lld\n",(n*n)%x);
    }
    return 0;
}
    
