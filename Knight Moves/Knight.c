#include<stdio.h>
char start[5],end[5];
int visit[10][10][25];
int find(char d,int n,int t)
{
   // printf("%c%c\t%d\t%c%c\t%d\n",d,n,t,end[0],end[1],visit[d-97][n-48][t]);
    
    if(d>104||d<97||n<49||n>56||t>20)
    {
    //printf("\n%c%creturn\n\n",d,n);
    return 999999999;
    }

    if(d==end[0]&&n==end[1])
    {
    //printf("AAAAAAAAAAAAAAAAAAAAA\n");
    return t;
    }
    
    if(visit[d-97][n-48][t]==1)
    return 99999999;
    
    visit[d-97][n-48][t]=1;    
    
//    printf("%d %d %d\n",d-97,n-48,visit[d-97][n-48]);
    
    int pos[8];
    //printf("%c%cAAAAAA\n",d,n);
    pos[0]=find(d+2,n+1,t+1);
    pos[1]=find(d-2,n+1,t+1);
    pos[2]=find(d+1,n+2,t+1);
    pos[3]=find(d-1,n+2,t+1);
    pos[4]=find(d+2,n-1,t+1);
    pos[5]=find(d-2,n-1,t+1);
    pos[6]=find(d-1,n-2,t+1);
    pos[7]=find(d+1,n-2,t+1);
    
    int min=pos[0],i;
    for(i=1;i<8;i++)
    {
    //printf("%d \t\t %d\n",pos[i],min);
    if(pos[i]<min)
    min=pos[i];
    }
    
    return min;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%s%s",&start,&end);
    int i,j,k;
    for(i=0;i<10;i++)
    for(j=0;j<10;j++)
    for(k=0;k<25;k++)
    visit[i][j][k]=0;
    printf("%d\n",find(start[0],start[1],0));
    scanf("%s",&end);
    }
    return 0;
}
