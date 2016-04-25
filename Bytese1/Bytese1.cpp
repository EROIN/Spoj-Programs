#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;

struct node
{
       int x,y;
};

int arr[105][105],m,n,a,b,tim,dist[105][105];
bool visit[105][105];
int dir[2][4]={0,1,0,-1,-1,0,1,0};

bool operator<(const node &x, const node &y)
{
     return arr[x.x][x.y]<arr[y.x][y.y];
}
void dj()
{
     priority_queue<node> p;
     p.push((node){1,1});
     while(!p.empty())
     {
                      int i=p.top().x;
                      int j=p.top().y;
                      p.pop();
                      for(int d=0;d<4;d++)
                      {
                              int x=i+dir[0][d];
                              int y=j+dir[1][d];
                              if(i>=1&&i<=m&&j>=1&&j<=n&&dist[i][j]+arr[x][y]<dist[x][y])
                              {
                              dist[x][y]=dist[i][j]+arr[x][y];
                              p.push((node){x,y});
                              }
                      }
     }
}
int main()
{
    int t,i,j;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d%d",&m,&n);
              for(i=1;i<=m;i++)
              for(j=1;j<=n;j++)
              scanf("%d",&arr[i][j]);
              scanf("%d%d%d",&a,&b,&tim);
              
              for(i=0;i<=m;i++)
              for(j=0;j<=n;j++)
              {
              visit[i][j]=false;
              dist[i][j]=10000000;
              }
              dist[1][1]=arr[1][1];
              
              dj();
              dist[a][b]<=tim?printf("YES\n%d\n",tim-dist[a][b]):printf("NO\n");
    }
    //cin>>i;
    return 0;
}
              
