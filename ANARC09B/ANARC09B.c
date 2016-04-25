#include<stdio.h>
long long int gcd(long long int a,long long int b)
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
    long long int a,b;
    while(scanf("%lld%lld",&a,&b)&&a&&b)
    {
    long long int hcf=gcd(a,b);
    printf("%lld\n",(a/hcf)*(b/hcf));
    }
    return 0;
}
