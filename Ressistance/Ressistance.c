#include<stdio.h>
int main()
{
    long long int a=1,b=1,c=1,d=1,n,m,t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%lld%lld",&n,&m);
    n--;
    while(n--)
    {
              c+=d;
              if(c>=m)
              c%=m;
              d+=c;
              if(d>=m)
              d%=m;
    }
    printf("%lld/%lld\n",c%m,d%m);
    }
    scanf("%d",&n);
    return 0;
}
