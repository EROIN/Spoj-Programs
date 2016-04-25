#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct node
{
       int n,level;
};
vector <int> v[10005];
int n,dist[10005];
bool visit[10005];

int find(int s)
{
    int i,max=0,pos=1;
    for(i=0;i<=n;i++)
    {
    visit[i]=false;
    dist[i]=0;
    }
    
    queue<node> q;
    q.push((node){s,0});
    while(!q.empty())
    {
                     node nod=q.front();
                     q.pop();
                     int nd=nod.n;
                     int level=nod.level;
                     int size=v[nd].size();
                     //cout<<nd;
                     visit[nd]=true;
                     for(i=0;i<size;i++)
                     {
                             //cout<<v[nd][i];
                             if(!visit[v[nd][i]])
                             {
                             q.push((node){v[nd][i],level+1});
                             dist[v[nd][i]]=level+1;
                             }
                     }
    }
    for(i=0;i<=n;i++)
    if(dist[i]>max)
    {
                   pos=i;
                   max=dist[i];
    }
    //cout<<pos;
    return pos;
}
int main()
{
    int x,y,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
                    scanf("%d%d",&x,&y);
                    v[x].push_back(y);
                    v[y].push_back(x);
    }
    printf("%d\n",dist[find(find(1))]);
    return 0;
}
