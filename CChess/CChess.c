#include<stdio.h>
int visit[10][10][70],aa,bb,cc,dd;
int find(int a,int b,int c,int d,int t)
{
   // printf("%d %d %d %d %d %d\n",a,b,t,c,d,visit[c][d][t]);
    
    int cost=a*c+b*d;
    
    if(a<0||a>7||b<0||b>7||c<0||c>7||d<0||d>7||t>70)
    return 100000;
    
    if(c==cc&&d==dd)
    return cost;
    
    if(visit[c][d][t])
    {
    //printf("Visited\n");
    return 100000;
    }
    
    visit[c][d][t]=1;
    
    int all[8],i,min=110000;
    
    all[0]=cost+find(c,d,c-1,d-2,t+1);
    all[1]=cost+find(c,d,c-1,d+2,t+1);
    all[2]=cost+find(c,d,c+1,d-2,t+1);
    all[3]=cost+find(c,d,c+1,d+2,t+1);
    
    all[4]=cost+find(c,d,c-2,d-1,t+1);
    all[5]=cost+find(c,d,c-2,d+1,t+1);
    all[6]=cost+find(c,d,c+2,d-1,t+1);
    all[7]=cost+find(c,d,c+2,d+1,t+1);
    
    //for(i=0;i<8;i++)
    //printf("%d\n",all[i]);
    
    for(i=0;i<8;i++)
    if(all[i]<min)
    min=all[i];
    //printf("\n\n%d\n",min);
    
    return min;
}

int main()
{
    int j,k,i;
    while(scanf("%d%d%d%d",&aa,&bb,&cc,&dd)!=EOF)
    {
    for(i=0;i<10;i++)
    for(j=0;j<10;j++)
    for(k=0;k<70;k++)
    visit[i][j][k]=0;
    printf("%d\n",find(0,0,aa,bb,0));
    }
    return 0;
}
