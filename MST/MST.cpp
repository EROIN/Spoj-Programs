#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>
using namespace std;
long long int n;
struct node
{
       long long int n,w;
};
vector<node> v[100005];
bool visit[100005];

bool operator <(const node &a, const node &b)
{
     return a.w>b.w;
}
long long int find()
{
    long long int i,sum=0,nv=0;
    
    priority_queue<node> q;
    q.push((node){1,0});
    
    while(!q.empty())
    {
                     node nod=q.top();
                     q.pop();
                     long long int nd=nod.n;
                     long long int w=nod.w;
                     long long int size=v[nd].size();
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
    return sum;
}
    
int main()
{
    long long int m,i,a,b,c;
    //scanf("%d",&t);
    //while(t--)
    {
              scanf("%lld%lld",&n,&m);
              for(i=0;i<=n;i++)
              {
              v[i].clear();
              visit[i]=false;
              }
              
              for(i=1;i<=m;i++)
              {
                               scanf("%lld%lld%lld",&a,&b,&c);
                               v[a].push_back((node){b,c});
                               v[b].push_back((node){a,c});
              }
              printf("%lld\n",find());
    }
    return 0;
}
