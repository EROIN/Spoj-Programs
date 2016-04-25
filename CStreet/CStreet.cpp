#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>
using namespace std;
int p,n;
struct node
{
       int n,w;
};
vector<node> v[1005];
bool visit[1005];

bool operator <(const node &a, const node &b)
{
     return a.w>b.w;
}
int find()
{
    int i,sum=0,nv=0;
    
    priority_queue<node> q;
    q.push((node){1,0});
    
    while(!q.empty())
    {
                     node nod=q.top();
                     q.pop();
                     int nd=nod.n;
                     int w=nod.w;
                     int size=v[nd].size();
                     if(visit[nd])
                     continue;
                     //cout<<nd<<endl;
                     visit[nd]=true;
                     nv++;
                     sum+=w;
                     if(nv==n)
                     break;
                     for(i=0;i<size;i++)
                     {
                                        if(!visit[v[nd][i].n])
                                        q.push(v[nd][i]);
                     }
    }
    return sum*p;
}
    
int main()
{
    int t,m,i,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d%d%d",&p,&n,&m);
              for(i=0;i<=n;i++)
              {
              v[i].clear();
              visit[i]=false;
              }
              
              for(i=1;i<=m;i++)
              {
                               scanf("%d%d%d",&a,&b,&c);
                               v[a].push_back((node){b,c});
                               v[b].push_back((node){a,c});
              }
              printf("%d\n",find());
    }
    return 0;
}
