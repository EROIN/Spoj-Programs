#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
struct node
{
       int n,w;
};
int n,q,s,d;
vector <node> v[505];
int dist[505];

bool operator<(const node &a, const node &b)
{
     return a.w<b.w;
}
void dj()
{
     priority_queue<node> p;
     p.push((node){s,0});
     while(!p.empty())
     {
                      int nod=p.top().n;
                      p.pop();
                      int size=v[nod].size();
                      for(int it=0;it<size;it++)
                      {
                              //cout<<v[nod][it].n<<endl;
                              if(v[nod][it].w<dist[v[nod][it].n])
                              {
                              if(dist[nod]+v[nod][it].w<dist[v[nod][it].n])
                              {
                              dist[v[nod][it].n]=dist[nod]+v[nod][it].w;
                              p.push((node){v[nod][it].n,dist[v[nod][it].n]});
                              }
                              }
                      }
     }
}
int main()
{
    int i,a,b,w;
    scanf("%d",&n);
    for(i=0;i<=502;i++)
    dist[i]=1000000;
    for(i=1;i<=n;i++)
    {
    scanf("%d%d%d",&a,&b,&w);
    v[a].push_back((node){b,w});
    v[b].push_back((node){a,w});
    }
    scanf("%d%d",&s,&q);
    dist[s]=0;
    dj();
    for(i=1;i<=q;i++)
    {
    scanf("%d",&a);
    dist[a]==1000000?printf("NO PATH\n"):printf("%d\n",dist[a]);
    }
    cin>>i;
    return 0;
}
