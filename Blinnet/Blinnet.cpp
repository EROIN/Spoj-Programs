#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>
using namespace std;
struct node
{
       int n,w;
};
vector <node> v[10005];
int n;
bool visit[10005];

bool operator<(const node & a,const node &b)
{
     return a.w>b.w;
}
int find()
{
    int i,sum=0,nv=0;
    for(i=0;i<=n;i++)
    visit[i]=false;
    
    priority_queue<node> p;
    p.push((node){1,0});
    while(!p.empty())
    {
                     node nd=p.top();
                     p.pop();
                     int nod=nd.n;
                     
                     if(visit[nod])
                     continue;
                     visit[nod]=true;
                     
                     int w=nd.w;
                     int size=v[nod].size();
                     sum+=w;
                     nv++;
                     if(nv==n)
                     break;
                     for(i=0;i<size;i++)
                     {
                     if(!visit[v[nod][i].n])
                     p.push(v[nod][i]);
                     }
    }                    
    return sum;
}
                     
int main()
{
    int t,i,neigh,u,w;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d",&n);
              for(i=1;i<=n;i++)
              {
              v[i].clear();
              scanf("%*s %d",&neigh);
              for(int j=1;j<=neigh;j++)
              {
              scanf("%d%d",&u,&w);
              v[i].push_back((node){u,w});
              v[u].push_back((node){i,w});
              }
              }
              printf("%d\n",find());
    }
    return 0;
}
    
              
