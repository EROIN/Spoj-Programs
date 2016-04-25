#include<stdio.h>
int main()
{
    long long int n,i,node,sum;
    while(scanf("%lld",&n)&&n)
    {
          sum=0;
          for(i=1;i<=n/2;i++)
          scanf("%lld",&node);
          for(;i<=n;i++)
          {
          scanf("%lld",&node);
          sum+=node;
          }
          printf("%lld\n",sum);
    }
    return 0;
}
