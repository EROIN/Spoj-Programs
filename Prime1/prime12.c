#include<stdio.h>
#include<math.h>
int main()
{
    long long int i,j,srt,n=32000,count=0;
    
    int mark[32000]={0};
    long long int prime[3500];
    srt=sqrt(n);
    for(i=2;i<srt;i++)
    {
                      if(mark[i]==0)
                      {
                                    for(j=i*i;j<n;j+=i)
                                    mark[j]=1;
                      }
    }

    for(i=2;i<n;i++)
    if(mark[i]==0)
    prime[count++]=i;

    int find[100010],t;
    scanf("%d",&t);
    while(t--)
    {
    long long int x,y,diff;
    
    scanf("%lld%lld",&x,&y);
    diff=y-x+2;
    
    for(i=0;i<=diff+2;i++)
    find[i]=1;
    
    srt=sqrt((double)y);
    
    for(i=0;prime[i]<=srt;i++)
    {
              long long int first=x/prime[i],loop;
              first=first*prime[i];
              if(first<x)
              first+=prime[i];
              for(loop=first;loop<=y;loop+=prime[i])
              find[loop-x]=0;
              
    }

    if(x<=srt)
    {
    for(i=0;prime[i]<=srt;i++)
    printf("%lld\n",prime[i]);
    }
    
    for(i=x;i<=y;i++)
    if(i!=1&&find[i-x]==1)
    printf("%lld\n",i);
    printf("\n");
    }
    return 0;
}
