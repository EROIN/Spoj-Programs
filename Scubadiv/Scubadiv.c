#include<stdio.h>
#define min(a,b) a<b?a:b
int to,tno,total;
int dp[1050][100][100];

struct cylinder
{
    int o,no,weight;
} c[1000];

int find(int n,int o,int no)
{
    if(n==total)
    {
    //printf("n\n");
    if(no<tno||o<to)
        return 999999999;
    return 0;
    }
    
    
    if(o>=to&&no>=tno)
    return 0;
   
   if(o>to)
   o=to;
   if(no>tno)
   no=tno;
   
    //printf("%d\t%d\t%d\n",n,o,no); 
   // printf("%d\n",dp[n][o][no]);
    
    if(dp[n][o][no]!=-1)
    return dp[n][o][no];

    int a=c[n].weight+find(n+1,o+c[n].o,no+c[n].no);
    int b=find(n+1,o,no);
    
    dp[n][o][no]= min(a,b);
    return dp[n][o][no];
}

int main()
{
int i,j,k,t;
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&to,&tno);
scanf("%d",&total);
for(i=0;i<total;i++)
scanf("%d%d%d",&c[i].o,&c[i].no,&c[i].weight);

for(i=0;i<1050;i++)
for(j=0;j<100;j++)
for(k=0;k<100;k++)
dp[i][j][k]=-1;

printf("%d\n",find(0,0,0));
}
//scanf("%d",&n);
return 0;
}
