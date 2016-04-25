#include<stdio.h>
int visit[1005],n,p[1005];
int lca(int u,int v)
{
    int i;
    for(i=0;i<=n;i++)
    visit[i]=0;
    
    while(p[u]!=u)
    {
                 // printf("%d %d\n",p[u],u);
                  visit[u]=1;
                  u=p[u];
    }
    visit[u]=1;
    while(visit[v]!=1)
    v=p[v];
    
    return v;
}
int main()
{
    int t,m,i,j,x,q,u,v,test;
    scanf("%d",&t);
    for(test=1;test<=t;test++)
    {
              printf("Case %d:\n",test);
              scanf("%d",&n);
              for(i=1;i<=n;i++)
              {
              scanf("%d",&m);
              for(j=1;j<=m;j++)
              {
              scanf("%d",&x);
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
