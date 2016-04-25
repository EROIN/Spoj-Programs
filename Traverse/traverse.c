#include<stdio.h>
char a[1005][1005],n;
int dp[1005][1005];
int find(int x,int y)
{
   // printf("%d %d %d\n",x,y,a[x][y]);
    if(x<0||x>=n||y<0||y>=n)
    return 0;
    
    if(x==n-1&&y==n-1)
    return 1;
    
    if(a[x][y]-'0'==0)
    return 0;
    
    if(dp[x][y])
    return dp[x][y];
    
    dp[x][y]=find(x+a[x][y]-'0',y)+find(x,y+a[x][y]-'0');
    return dp[x][y];
}
int main()
{
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%s",&a[i]);
    
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    dp[i][j]=0;
    
    printf("%d",find(0,0));
    //scanf("%d",&i);
    return 0;
}
