#include<iostream>
#include<cstdio>
using namespace std;

double dist[105][105];
double w;
int n;

void fd()
{
     for(int k=1;k<=n;k++)
     for(int i=1;i<=n;i++)
     for(int j=1;j<=n;j++)
     if(dist[i][j]<dist[i][k]*dist[k][j])
     dist[i][j]=dist[i][k]*dist[k][j];
}

int main()
{
    int m,a,b,i,j;
    
    while(scanf("%d",&n)&&n)
    {
    scanf("%d",&m);
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    dist[i][j]=0;
    
    for(i=1;i<=m;i++)
    {
    scanf("%d%d%lf",&a,&b,&w);
    dist[a][b]=dist[b][a]=w/100.0;                       
    }
    
    //dj();
    fd();
    
    printf("%.6lf percent\n",dist[1][n]*100.0+1e-10);
    }
//    cin>>i;
      return 0;
}
