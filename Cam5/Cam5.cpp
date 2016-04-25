#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
vector <int> v[100005];
bool visit[100005];
int n;

int dfs(int node)
{
    if(visit[node])
    return 0;
    
    visit[node]=true;
    int size=v[node].size();
    for(int i=0;i<size;i++)
    dfs(v[node][i]);
}
    

int find()
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
    if(!visit[i])
    {
                 count++;
                 dfs(i);
    }
    }
    return count++;
}
                    
int main()
{
    int t,e,i,a,b;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d%d",&n,&e);
              for(i=0;i<=n;i++)
              {
              v[i].clear();
              visit[i]=false;
              }
              
              for(i=1;i<=e;i++)
              {
              scanf("%d%d",&a,&b);
              v[a].push_back(b);
              v[b].push_back(a);
              }
              
              printf("%d\n",find());
    }
    return 0;
}
