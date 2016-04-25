#include<stdio.h>
int main()
{
    long long int a,b,c;
    int t;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%lld%lld%lld",&a,&b,&c);
              printf("%lld\n",a*a-2*b);
    }
    return 0;
}
