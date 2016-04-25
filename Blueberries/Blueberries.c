#include<stdio.h>
#define max(a,b) a>b?a:b
int a[1010],dp[1010][1010],number;
int find(int max,int n)
{
    //if(n==number-1)
    //return a[n];
    
    if(n>=number||max<0)
    return 0;
    
    if(dp[max][n]!=-1)
    return dp[max][n];
    
    //printf("%d %d\n",max,n);
    
    int x=a[n]+find(max-a[n],n+2);
    if(x>max)
    {
    //printf("%d\n",x);
    x=0;
    }
    
    int y=find(max,n+1);
    if(y>max)
    y=0;
    
    dp[max][n]= max(x,y);
    return dp[max][n];
}
int main()
{
    int max,i,t,test,j;
    scanf("%d",&t);
    for(test=1;test<=t;test++)
    {
    scanf("%d%d",&number,&max);
    for(i=0;i<1010;i++)
    for(j=0;j<1010;j++)
    dp[i][j]=-1;
    for(i=0;i<number;i++)
    scanf("%d",&a[i]);
    printf("Scenario #%d: %d\n",test,find(max,0));
    if(test<t)
    printf("\n");
    }
    //scanf("%d",&max);
    return 0;
}
