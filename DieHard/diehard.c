#include<stdio.h>
#define max(a,b) a>b?a:b 

int dp[1005][1005];
int find(int h,int a,char state)
{
    if(h<=0||a<=0)
    return 0;
    
    if(dp[h][a]!=-1)
    return dp[h][a];
    
    return dp[h][a]=state=='a'?max(1+find(h-5,a-10,'w'),1+find(h-20,a+5,'f')):1+find(h+3,a+2,'a');
}
int main()
{
          int h,a,t;
          //printf("SSSSS");
          scanf("%d",&t);
          while(t--)
          {
          memset(dp,-1,sizeof(dp));
          scanf("%d%d",&h,&a);
          printf("%d\n",find(h+3,a+2,'a'));
          }
          //scanf("%d",&h);
          return 0;
}
