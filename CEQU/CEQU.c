#include<stdio.h>
int gcd(int a,int b)
{
    while(b)
    {
            int t=a%b;
            a=b;
            b=t;
    }
    return a;
}
int main()
{
    int t,a,b,c,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
                     scanf("%d%d%d",&a,&b,&c);
                     int hcf=gcd(a,b);
                     double x=(double)c/(double)hcf;
                     //printf("%d %lf\n",hcf,x);
                     printf("Case %d: ",i);
                     if(ceil(x)==floor(x))
                     printf("Yes\n");
                     else
                     printf("No\n");
    }
//    scanf("%d",&t);
    return 0;
}
