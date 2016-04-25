#include<stdio.h>
int main()
{
    long long unsigned int n,t,ans;
    scanf("%llu",&t);
    while(t--)
    {
              scanf("%llu",&n);
              ans=(n*(n+2)*(2*n+1))/8;
              printf("%llu\n",ans);
    }
    return 0;
}
