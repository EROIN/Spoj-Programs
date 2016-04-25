#include<iostream>
#include<queue>
#include<cstdio>
#include<cmath>
using namespace std;
int a,b;
bool mark[10005]={false},visit[10005];
struct node
{
       int n,level;
};
void prime()
{
     int n=100,p[50],idx=0,i,j;
     for(i=3;i<n;i+=2)
     {
             if(mark[i]==false)
             {
             for(j=i*i;j<10000;j+=2*i)
             mark[j]=true;
             }
     }
     p[idx++]=2;
     for(i=3;i<=n;i+=2)
     if(!mark[i])
     p[idx++]=i;
     
     for(i=0;i<idx;i++)
     {
                       int first=1000/p[i];
                       first=first*p[i];
                       if(first<1000)
                       first+=p[i];
                       mark[first]=true;
                       for(j=first;j<=10000;mark[j]=true,j+=p[i]);
     }
}
void display()
{
     for(int i=3;i<10000;i+=2)
     if(!mark[i])
     cout<<i<<endl;
}
int dj()
{
    queue<node> q;
    int digit[4];
    q.push((node){a,0});
    while(!q.empty())
    {
                     node nd=q.front();
                     int level=nd.level;
                     int n=nd.n;
                     //cout<<n<<endl;

                     if(n==b)
                     return level;
                     q.pop();
                     digit[0]=n%10;
                     digit[1]=(n%100)/10;
                     digit[2]=(n%1000)/100;
                     digit[3]=n/1000;
                     
                     /*for(int i=3;i>=0;i--)
                     cout<<digit[i];
                     cout<<endl;*/
                     
                     for(int i=0;i<4;i++)
                     {
                             int nn=n-digit[i]*(int)pow(10.0,i);
                             //cout<<nn<<endl;
                             for(int j=0;j<10;j++)
                             {
                                     int x=nn+j*(int)pow(10.0,i);
                                     //cout<<x<<endl;
                                     if(x>1000&&!mark[x]&&!visit[x])
                                     {
                                     visit[x]=true;
                                     //cout<<x<<endl;
                                     q.push((node){x,level+1});
                                     }
                             }
                     }
    }
    return 12;
}
    
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<=10000;i++)
    mark[i]=false;
    prime();
    //display();
    while(t--)
    {
              for(i=1;i<=10000;i++)
              visit[i]=false;
              scanf("%d %d",&a,&b);
              printf("%d\n",dj());
    }
    return 0;
}
