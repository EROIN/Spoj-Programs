#include<stdio.h>
long long int m=10000007;
long long int power(long long int a,long long int b)
{
    long long int r=1;
    while(b)
    {
            if(b%2==1)
            r=(r*a)%m;
            a=(a*a)%m;
            b/=2;
    }
    return r;
}
int main()
{
    long long int n,k;
    while(scanf("%lld%lld",&n,&k)&&n&&k)
    {
               //printf("%ld\n",power(n,k));
               long long int r=(2*power(n-1,n-1))%m+power(n,n)%m+(2*power(n-1,k))%m+power(n,k)%m;
               r=r%m;
               printf("%lld\n",r);
    }
    return 0;
}
