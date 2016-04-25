
//THIS PROGRAM WILL ALWAYS GIVE TLE FOR LARGE VALUES OF N...

#include<algorithm>
#include<cstdio>
#include<queue>
using namespace std;

int n,m,visit[10005],vt,a[10005][10005];

int find()
{
    queue <int> q;
    q.push(0);
    int x;
    while(!q.empty())
    {
                     int i=q.front();
                     q.pop();
                     if(visit[i]==1)
                     return 0;
                     visit[i]=1;
                     vt++;
                     for(x=0;x<n;x++)
                     if(a[i][x])
                     q.push(x);
    }
    return 1;
}
main()
{
      int i,j,k,x,y;
      scanf("%d%d",&n,&m);
      if(m==n-1)
      {
      for(x=0;x<n;x++)
      {
      visit[x]=0;
      for(y=0;y<n;y++)
      a[x][y]=0;
      }
      for(i=0;i<m;i++)
      {
                      scanf("%d%d",&j,&k);
                      a[j-1][k-1]=1;
      }
      find()&&vt==n?printf("YES"):printf("NO");
      }
      else
      printf("NO");
      scanf("%d%",&i);
}
                      
