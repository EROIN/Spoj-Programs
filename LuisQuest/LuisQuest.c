#include<stdio.h>
int main()
{
    int n,p0,p1,t,p2,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
                     scanf("%d%d%d%d",&p0,&p1,&t,&p2);
                     double ans=(  (double)t*(log((double)p2)-log((double)p0)) )  /    (log((double)p1)-log((double)p0));
                     printf("Scenario #%d: %.2lf\n",i,ans);
    }
    return 0;
}
