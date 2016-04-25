#include<stdio.h>
char maze[22][22],visit[22][22];
int n,m,count=0,sx,sy,dx,dy;

int check()                     //Dont try to be too short. 
{
    int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<m;j++)
            {
                    if(i==0||i==n-1||j==0||j==m-1)
                    {
                           if(maze[i][j]=='.')
                           {
                                    count++;
                                    if(count==1)
                                    {
                                                sx=i;
                                                sy=j;
                                    }
                                    else if(count==2)
                                    {
                                                dx=i;
                                                dy=j;
                                    }
                                    else 
                                    return 0;
                           }
                    }
            }
    }
    if(count==2)
    return 1;
    return 0;
}
                                                 

int path(int i,int j)
{
    if(i<0||j<0||i>=n||j>=m)
    return 0;
    
    if(maze[i][j]=='#')
    return 0;
    
    if(visit[i][j]==1)
    return 0;
    
    visit[i][j]=1;
    
    if(i==dx&&j==dy)
    return 1;
    
    int ans;
    ans=path(i+1,j);
    if(ans==1)
    return ans;
    ans=path(i-1,j);
    if(ans==1)
    return ans;
    ans=path(i,j+1);
    if(ans==1)
    return ans;
    ans=path(i,j-1);
    
    return ans;
}
int main()
{
    int t,i,j,k;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d%d",&n,&m);
    for(j=0;j<n;j++)
    for(k=0;k<m;k++)
    visit[j][k]=0;
    count=0;
    for(i=0;i<n;i++)
    scanf("%s",&maze[i]);
    
    //printf("%d %d %d %d %d\n",count,sx,sy,dx,dy);
    
    check()&&path(sx,sy)?printf("valid\n"):printf("invalid\n");
    }
    return 0;
}
