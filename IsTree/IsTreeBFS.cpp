#include<cstdio>
#include<iostream>
#include<list>
#include<queue>
#include<algorithm>
using namespace std;

list <int> a[10005];
int n,m,vt=0,visit[10005];

int find()
{
    queue<int> q;
    list <int>::iterator it,start,end;
    int i=0;
    q.push(i);
    
    while(!q.empty())
    {
                     i=q.front();
                     if(visit[i]==1)
                     return 0;
                     visit[i]=1;
                     vt++;
                     q.pop();
                     start=a[i].begin();
                     end=a[i].end();
                     for(it=start;it!=end;++it)
                     q.push(*it);
    }
    return 1;
}                                 

int main()
{
    int i,c,b;
    scanf("%d%d",&n,&m);
    if(m==n-1)
    {
    for(i=0;i<n;i++)
    visit[i]=0;
    for(i=0;i<m;i++)
    {
                    scanf("%d%d",&b,&c);
                    a[b-1].push_back(c-1);
    }
    find()&&vt==n?printf("YES"):printf("NO");
    }
    else
    printf("NO");
    scanf("%d",&i);
}
