#include<cstdio>
#include<iostream>
#include<list>
using namespace std;
list <int> a[10005];        //not using adjacency list will result in TLE.
int n,m,visit[10005],vt=0;

int find(int node)          //dfs logic is correct but...
{
    int x;
    if(visit[node]==1)
    return 0;
    visit[node]=1;
    vt++;                                          //...also count the number of nodes visited so far....
    list<int>::iterator i,start,end;
    
    end=a[node].end();
    start=a[node].begin();
    
    for(i=start;i!=end;++i)
    {
    x=find(*i);
    //printf("%d\n",x);
    if(x==0)
    return 0;
    }
    return 1;
}
int main()
{
    int i,j,k;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    visit[i]=0;
    if(m==n-1)
    {
    for(i=1;i<=m;i++)
    {
    scanf("%d%d",&j,&k);
    a[j-1].push_back(k-1);
    }
    find(0)&&vt==n?printf("YES\n"):printf("NO\n");           //all the nodes must be visited in traversal through the graph.
    }
    else
    printf("NO\n");
    //scanf("%d",&i);
    return 0;
}                                                            //LEARNT A LOT!!!
