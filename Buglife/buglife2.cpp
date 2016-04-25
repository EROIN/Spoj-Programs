#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int n,p,color[2005];
vector <int> a[2005];

int find()
{
    queue <int>q;
    int node;
    for(node=0;node<n;node++)
    {
    if(color[node]==0)
    q.push(node);
    while(!q.empty())
    {
                     int x=q.front();
                     q.pop();
                     //printf("%d\n",node);
                     if(color[x]==0)
                     color[node]=1;
                     vector <int>::iterator i,start,end;
                     start=a[x].begin();
                     end=a[x].end();
                     for(i=start;i!=end;++i)
                     {
                                  // printf("%d %d\n",x,*i);         
                                   if(color[x]==color[*i])
                                   return 0;
                                   if(color[*i])
                                   continue;
                                   if(color[*i]==0)
                                   color[*i]=-color[x];
                                   q.push(*i);
                     }
    }
    }
    return 1;
}

int main()
{
    int c,b,i,t,loop;
    scanf("%d",&t);
    for(loop=1;loop<=t;loop++)
    {
    scanf("%d%d",&n,&p);
    
    for(i=0;i<=n;i++)
    {
    color[i]=0;
    a[i].clear();
    }
    
    for(i=0;i<p;i++)
    {
                    scanf("%d%d",&b,&c);
                    a[b].push_back(c);
                    a[c].push_back(b);
    }
    printf("Scenario #%d:\n",loop);
    find()?printf("No suspicious bugs found!\n"):printf("Suspicious bugs found!\n");
    }
    //scanf("%d",&i);
    return 0;
}
