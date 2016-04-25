#include<stdio.h>
int main()
{
    long long int t,n,x,i,sum=0;
    scanf("%lld",&t);
    while(t--)
    {
    sum=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%lld",&x);
    x=x%n;
    sum+=x;
    }
    sum%n==0?printf("YES\n"):printf("NO\n");
    }
    return 0;
}
