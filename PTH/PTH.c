#include<stdio.h>
#include<math.h>
long long int n;
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
                     scanf("%lld",&n);
                     long long int x=(long long int)sqrt(1+n);
                     printf("Case %d: %lld\n",i,x-1);
    }
}
