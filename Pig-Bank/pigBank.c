#include<stdio.h>
#define min(a,b) a<b?a:b
int p[505],w[505];
int full=0;
int dp[550][10050];
int find(int n,int wg)
{
    if(wg<=0)                   //no more wieght to be accounted for.
    {
//    printf("return\n");
    full=1;
    return 0;
    }

    if(n<0)                     //no more coins left.
    {
    if(w[n+1]<=wg)
    return 999999999;
 //   printf("n\n");
    return 0;
    }

    if(dp[n][wg]!=-1)
    return dp[n][wg];


   // printf("%d\t%d\t%d\n",n,wg,w[n]);
    if(w[n]>wg)
    {
   // printf("IF\n");
    if(n==0)
    return 999999999;
    return find(n-1,wg);
    }
    else
    {
    //printf("ELSE\n");
    int a=find(n-1,wg);
    int b=p[n]+find(n,wg-w[n]);

    //printf("%d\t%d\n",b,a);
    dp[n][wg]=min(a,b);
    return dp[n][wg];
    }
}

int main()
{
    int f,e,n,i,t,j;
    scanf("%d",&t);
    while(t--)
    {
    full=0;
    for(i=0;i<550;i++)
    for(j=0;j<10050;j++)
    dp[i][j]=-1;
    scanf("%d%d",&f,&e);
    scanf("%d",&n);
    //printf("%d",e-f);
    for(i=0;i<n;i++)
    scanf("%d%d",&p[i],&w[i]);
    int x=find(n-1,e-f);
    full?printf("The minimum amount of money in the piggy-bank is %d.\n",x):printf("This is impossible.\n");
    }
   // scanf("%d",&n);
    return 0;
}
