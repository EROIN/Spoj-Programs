#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    unsigned long long int n,sqr;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
              scanf("%lld",&n);
              sqr=sqrt(n);
              sqr*sqr==n||(sqr-1)*(sqr-1)==n||(sqr+1)*(sqr+1)==n?printf("Case %d: Yes\n",i):printf("Case %d: No\n",i);
    }
    return 0;
}
