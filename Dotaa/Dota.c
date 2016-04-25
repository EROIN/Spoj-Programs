#include<stdio.h>
int main()
{
    int n,m,d,i,a[505],sum=0,t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d%d%d",&n,&m,&d);
    sum=0;
    for(i=0;i<n;i++)
    {
                    scanf("%d",&a[i]);
                    sum+=(a[i]-1)/d;
    }
    sum>=m?printf("YES\n"):printf("NO\n");
    }
    //scanf("%d",&i);
    return 0;
}
    
