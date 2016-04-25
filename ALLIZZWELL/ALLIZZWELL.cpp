#include<stdio.h>
char a[105][105],visited[105][105];
int n,m;
char str[]="ALLIZZWELL";
int find(int i,int j,int letter)
{
    if(i<0||j<0||i>=n||j>=m)
    return 0;
    
    if(visited[i][j]==1)
    return 0;
    
    if(a[i][j]!=str[letter])
    return 0;
    
    if(letter==9)
    return 1;
    
    visited[i][j]=1;
    
    int ans=0;
    ans|=find(i,j+1,letter+1);
    ans|=find(i,j-1,letter+1);
    ans|=find(i+1,j,letter+1);
    ans|=find(i-1,j,letter+1);
    
    ans|=find(i-1,j+1,letter+1);
    ans|=find(i-1,j-1,letter+1);
    ans|=find(i+1,j+1,letter+1);
    ans|=find(i+1,j-1,letter+1);
    
    return ans;
}    
   
int main()
{
    int i,j,ans=0,t;
    scanf("%d",&t);
    while(t--)
    {
    ans=0;
    scanf("%d%d",&n,&m);
    //printf("%d %d",n,m);
    for(i=0;i<n;i++)
    scanf("%s",&a[i]);
    
    for(i=0;i<=n;i++)
    for(j=0;j<=m;j++)
    visited[i][j]=0;
    
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    if(a[i][j]=='A')
    ans|=find(i,j,0);
    ans?printf("YES\n"):printf("NO\n");
    }
//    printf("%d",0|1);
    return 0;  
}
