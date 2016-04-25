#include<stdio.h>
int h[1005],p[1005],n;
int lca(int a,int b)
{
    if(h[a]>h[b])
    {
                 int t=a;
                 a=b;
                 b=t;
    }
    
    while(h[a]!=h[b])
    b=p[b];
    
    if(a==b)
    return a;
    
    while(p[a]!=p[b])
    {
                     a=p[a];
                     b=p[b];
    }
    
    return p[a];
}
int main()
{
    int t,m,i,j,x,q,u,v,test;
    scanf("%d",&t);
    for(test=1;test<=t;test++)
    {
              printf("Case %d:\n",test);
              scanf("%d",&n);
              
              for(i=0;i<=n;i++)
              h[i]=p[i]=0;
              
              for(i=1;i<=n;i++)
              {
              scanf("%d",&m);
              for(j=1;j<=m;j++)
              {
              scanf("%d",&x);
              h[x]=h[i]+1;
              p[x]=i;
              }
              }
              p[1]=1;
              scanf("%d",&q);
              for(i=1;i<=q;i++)
              {
              scanf("%d%d",&u,&v);
              printf("%d\n",lca(u,v));
              }
    }
    return 0;
}
