#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
struct node
{
       int x,y,w;
       
       bool operator<(const node &a) const
       {
       return w<a.w;
       }
};
vector <node> v;
int n,p[10005];

int find(int x)
{
    while(p[x]!=x)
    x=p[x];
    return x;
}
int krus()
{
    int i,sum=0,count;
    for(i=0;i<=n;i++)
    p[i]=i;
    
    sort(v.begin(),v.end());
    
    for(i=0,count=0;count<n-1;i++)
    {
    node ed=v[i];
    int x=v[i].x;
    int y=v[i].y;
    x=find(x);
    y=find(y);
    if(x!=y)
    {
            count++;
            sum+=ed.w;
            p[x]=y;
    }
    }
    return sum;
}
int main()
{
    int t,j,neigh;
    scanf("%d",&t);
    while(t--)
    {
              v.clear();
              scanf("%d",&n);
              node e;
              for(e.x=1;e.x<=n;e.x++)
              {
              scanf("%*s %d",&neigh);
              for(j=1;j<=neigh;j++)
              {
              scanf("%d%d",&e.y,&e.w);
              v.push_back(e);
              }
              }
              printf("%d\n",krus());
    }
    return 0;
}
              
              
