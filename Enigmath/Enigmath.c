#include<stdio.h>
long long int gcd(long int a,long int b)
{
    while(b)
    {
            long long int t=a%b;
            a=b;
            b=t;
    }
    return a;
}
int main()
{
    int t;
    long long int a,b;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%lld%lld",&a,&b);
              long long int hcf=gcd(a,b);
              printf("%lld %lld\n",b/hcf,a/hcf);
    }
    scanf("%d",&a);
    return 0;
}
