#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>
using namespace std;

vector <int> v[10005];
int n,dist[10005];

//No need of visit array or struct node. Memory required should be theoretically reduced but it is practically the same.

int find(int s)
{
    int i,max=0,pos=1;
    for(i=0;i<=n;i++)
    dist[i]=-1;
    dist[s]=0;
    
    queue<int> q;
    q.push(s);
    while(!q.empty())
    {
                     int nd=q.front();
                     q.pop();
                     int size=v[nd].size();
                     //cout<<nd;
                     for(i=0;i<size;i++)
                     {
                             //cout<<v[nd][i];
                             if(dist[v[nd][i]]==-1)
                             {
                             q.push(v[nd][i]);
                             dist[v[nd][i]]=dist[nd]+1;
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
