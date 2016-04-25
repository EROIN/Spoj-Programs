#include<iostream>
#include<queue>
#include<vector>
#include<cstdio>
using namespace std;
struct node
{
       int n,w;
};
bool operator<(const node &a, const node &b)
{
     return a.w<b.w;
}
vector <node> v[10005];
int dist[10005],s,d;

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
                              if(dist[nod]+v[nod][it].w<dist[v[nod][it].n])
                              {
                              dist[v[nod][it].n]=dist[nod]+v[nod][it].w;
                              p.push((node){v[nod][it].n,dist[v[nod][it].n]});
                              }
                      }
     }
}
int main()
{
    int i,t,vert,edge,a,b,c;
    
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d%d",&vert,&edge);
    for(i=1;i<=vert;i++)
    {
    dist[i]=100000000;
    v[i].clear();
    }
    for(i=1;i<=edge;i++)
    {
                        scanf("%d%d%d",&a,&b,&c);
                        v[a].push_back((node){b,c});
    }
    scanf("%d%d",&s,&d);
    
    dist[s]=0;
    
    dj();
    
    dist[d]==100000000?printf("NO\n"):printf("%d\n",dist[d]);
    }
//    cin>>i;
}
