#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
using namespace std;

struct node
{
       int n,w;
};

int n,m,s,d,dist[100005];

bool operator<(const node &a,const node &b)
{
     return a.w<b.w;
}
void dj(vector<node> v[])
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
    int t,i,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d%d%d%d",&n,&m,&s,&d);
              //cout<<n<<m<<s<<d<<endl;
              vector<node> v[n+2];
              for(i=0;i<=n;i++)
              {
              dist[i]=10000000;
              }
              for(i=1;i<=m;i++)
              {
              scanf("%d%d%d",&a,&b,&c);
              //cout<<a<<" " <<b<<" " <<c<<endl;
              v[a].push_back((node){b,c});
              v[b].push_back((node){a,c});
              }
              dist[s]=0;
              //cout<<s<<d;
              dj(v);
              dist[d]==10000000?printf("NONE\n"):printf("%d\n",dist[d]);
    }
//    cin>>i;
    return 0;
}
              
