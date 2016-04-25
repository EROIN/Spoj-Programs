#include<stdio.h>
int n,m,visited[55][55];
char a[55][55];
int find(int i,int j,char letter)
{
    if(i<0||j<0||i>=n||j>=m)
    return 0;
    
    if(visited[i][j]==1)
    return 0;
    
    if(a[i][j]!=letter+1)
    return 0;
    
    visited[i][j]=1;
    
    int pos[8],max=0,loop;
    pos[0]=1+find(i+1,j,letter+1);
    pos[1]=1+find(i-1,j,letter+1);
    pos[2]=1+find(i+1,j+1,letter+1);
    pos[3]=1+find(i+1,j-1,letter+1);
    pos[4]=1+find(i-1,j+1,letter+1);
    pos[5]=1+find(i-1,j-1,letter+1);
    pos[6]=1+find(i,j+1,letter+1);
    pos[7]=1+find(i,j-1,letter+1);
    
    for(loop=0;loop<8;loop++)
    if(pos[loop]>max)
    max=pos[loop];
    
    return max;
}

int main()
{
    int i,j,t=1;
    while(scanf("%d%d",&n,&m)&&n&&m)
    {
    for(i=0;i<n;i++)
    scanf("%s",&a[i]);
    int max=0;

    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    visited[i][j]=0;
    
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {

    //printf("%c",a[i][j]);
    if(a[i][j]=='A')
    {
    int x=find(i,j,'A'-1);
    if(x>max)
    max=x;
    //printf("%d\n",max);
    }
    }
    printf("Case %d: %d\n",t++,max);
    }
    return 0;
}
