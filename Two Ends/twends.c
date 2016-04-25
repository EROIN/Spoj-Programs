#include<stdio.h>
#define max(a,b) a>b?a:b
int a[1001],n,dp[1002][1002];
int find(int i,int j,int t)
{
    if(i>j)
    return 0;
    
    if(dp[i][j]!=-1)
    return dp[i][j];
    
    int x=0,y=0;
    
    if(t%2==1)
    x=max(a[i]+find(i+1,j,t+1),a[j]+find(i,j-1,t+1));
    else
    {
        if(a[i]>=a[j])
        {
                     y=a[i];
                     x=find(i+1,j,t+1);
        }
        else
        {
                     y=a[j];
                     x=find(i,j-1,t+1);
        }
    }
    dp[i][j]=x-y;
    return x-y;
}
int main()
{
    int i,j,no=0;
    while(scanf("%d",&n)&&n)
    {
    no++;
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    for(j=0;j<n;j++)
    dp[i][j]=-1;
    }
    printf("In game %d, the greedy strategy might lose by as many as %d points.\n",no,find(0,n-1,1));
    }
    return 0;
}
