#include<stdio.h>
int main()
{
    long long int n,a,d,t,i,x,y,z;
    scanf("%lld",&t);
    while(t--)
    {
              scanf("%lld%lld%lld",&x,&y,&z);
              n=2*z/(x+y);
              d=(y-x)/(n-5);
              a=x-2*d;
              printf("%lld\n",n);
              for(i=1;i<=n;i++)
              {
              printf("%lld ",a);
              a+=d;
              }
              printf("\n");
    }
    //scanf("%lld",&t);
    return 0;
}
