#include<map>
#include<iostream>
using namespace std;
float dist[35][35];
int n;
bool fd()
{
     int i,j,k;
     for(i=1;i<=n;i++)
     {
                      for(j=1;j<=n;j++)
                      {
                                       for(k=1;k<=n;k++)
                                       {
                                              if(dist[i][j]<dist[i][k]*dist[k][j])
                                              dist[i][j]=dist[i][k]*dist[k][j];
                                       }
                      }
     }
     for(i=1;i<=n;i++)
     if(dist[i][i]>1.0)
     return true;
     return false;
}
int main()
{
    int i,j,test=1,q;
    char str[50];
    float f;
    map<string ,int> m;
    
    while(scanf("%d",&n)&&n)
    {
    //cout<<n;
    for(i=1;i<=n;i++)
    {
    scanf("%s",&str);
    m[(string)str]=i;
    }
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    dist[i][j]=0;                      //could be made 1 as well
    scanf("%d",&q);
    for(i=1;i<=q;i++)
    {
    scanf("%s %f",&str,&f);
    int x=m[(string)str];
    scanf("%s",&str);
    int y=m[(string)str];
    dist[x][y]=f;
    }
    printf("Case %d: ",test++);
    fd()?printf("Yes\n"):printf("No\n");
    }
    cin>>i;
}
